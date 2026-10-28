
#include <cstring>
class Solution {
public:
    int t[31][1501];

    int solve(vector<int>& stones, int i, int sum, int target) {
        if (i == stones.size())
            return sum;

        if (t[i][sum] != -1)
            return t[i][sum];

        int take = sum;

        if (sum + stones[i] <= target) {
            take = solve(stones, i + 1, sum + stones[i], target);
        }

        int skip = solve(stones, i + 1, sum, target);

        return t[i][sum] = max(take, skip);
    }

    int lastStoneWeightII(vector<int>& stones) {
        int total = 0;
        int n = stones.size();

        for (int i = 0; i < n; i++) {
            total += stones[i];
        }

        int target = total / 2;

        memset(t, -1, sizeof(t));

        int best = solve(stones, 0, 0, target);

        return total - 2 * best;
    }
};
