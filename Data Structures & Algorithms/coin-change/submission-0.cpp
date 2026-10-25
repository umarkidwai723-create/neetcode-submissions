
#include<cstring>
class Solution {
public:
    int t[10001][1001];
    int n;

    int solve(vector<int>& coins, int amount, int i) {

        if(amount == 0)
            return 0;

        if(i == n)
            return 1e9;

        if(t[amount][i] != -1)
            return t[amount][i];

        int skip = solve(coins, amount, i + 1);

        int take = 1e9;

        if(coins[i] <= amount)
            take = 1 + solve(coins, amount - coins[i], i);

        return t[amount][i] = min(take, skip);
    }

    int coinChange(vector<int>& coins, int amount) {
        n = coins.size();
        memset(t, -1, sizeof(t));

        int ans = solve(coins, amount, 0);

        return ans == 1e9 ? -1 : ans;
    }
};