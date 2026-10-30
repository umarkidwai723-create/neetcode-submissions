#include<cstring>
class Solution {
public:
    int n;
    int t[13][10001];
    const int INF = 1e9;

    int solve(vector<int>& coins, int i, int amount) {
        if (amount == 0) return 0;
        if (i >= n) return INF;
        if (t[i][amount] != -1) return t[i][amount];

        int skip = solve(coins, i + 1, amount);
        int take = INF;
        if (coins[i] <= amount)
            take = 1 + solve(coins, i, amount - coins[i]);

        return t[i][amount] = min(take, skip);
    }

    int coinChange(vector<int>& coins, int amount) {
        n = coins.size();
        memset(t, -1, sizeof(t));
        int ans = solve(coins, 0, amount);
        return ans == INF ? -1 : ans;
    }
};