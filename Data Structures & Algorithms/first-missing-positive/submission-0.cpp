class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int mini=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini)mini++;

        }
        return mini;
        
    }
};