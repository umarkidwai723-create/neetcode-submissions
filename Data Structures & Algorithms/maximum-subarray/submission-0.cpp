class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        int j=0;
        int n=nums.size();
        int sum=0;
        int maxsum=INT_MIN;
        while(j<n){
            sum+=nums[j];
            maxsum=max(maxsum,sum);
          if(sum<0)sum=0;
          j++;
         
            


        }
        return maxsum;

    }
};
