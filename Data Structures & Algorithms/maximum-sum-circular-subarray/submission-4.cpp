class Solution {
public:

    int kadane(vector<int>& nums) {
        int curr = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            curr = max(nums[i], curr + nums[i]);
            ans = max(ans, curr);
        }

        return ans;
    }

    int maxSubarraySumCircular(vector<int>& nums) {

        int n = nums.size();
        int ans = INT_MIN;

        for(int r = 0; r < n; r++) {

            // Find maximum subarray for current rotation
            ans = max(ans, kadane(nums));

            // Rotate right by 1
            int last = nums[n - 1];

            for(int i = n - 1; i > 0; i--) {
                nums[i] = nums[i - 1];
            }

            nums[0] = last;
        }

        return ans;
    }
};