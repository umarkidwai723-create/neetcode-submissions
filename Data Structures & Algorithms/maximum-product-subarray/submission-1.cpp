class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int mini = nums[0];
        int maxi = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            int currmax = max({nums[i], maxi * nums[i], mini * nums[i]});
            int currmini = min({nums[i], maxi * nums[i], mini * nums[i]});

            maxi = currmax;
            mini = currmini;

            ans = max(ans, maxi);
        }

        return ans;
    }
};