
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for (int k = 0; k < n - 3; k++) {
            if (k > 0 && nums[k] == nums[k - 1])
                continue;

            for (int x = k + 1; x < n - 2; x++) {
                if (x > k + 1 && nums[x] == nums[x - 1])
                    continue;

                int i = x + 1;
                int j = n - 1;

                while (i < j) {
                    long long sum = (long long)nums[i] +
                                    nums[j] + nums[k] + nums[x];

                    if (sum == target) {
                        ans.push_back({
                            nums[k], nums[x], nums[i], nums[j]
                        });

                        i++;
                        j--;

                        while (i < j && nums[i] == nums[i - 1])
                            i++;

                        while (i < j && nums[j] == nums[j + 1])
                            j--;
                    }
                    else if (sum > target) {
                        j--;
                    }
                    else {
                        i++;
                    }
                }
            }
        }

        return ans;
    }
};
