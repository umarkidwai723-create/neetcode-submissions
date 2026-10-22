class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int n=nums.size();
        int low=1;
        int high=*max_element(nums.begin(),nums.end());

        while(low<=high){
            int k=low+(high-low)/2;
            long long cnt=0;
            for(int i=0;i<n;i++){
                cnt+=((long long )nums[i]+k-1)/k;
            }
            
            if(cnt<=h){
                high=k-1;

            }
            else{
                low=k+1;
            }

           
        }return low;
        
    }
};
