class Solution {
public:
    int jump(vector<int>& nums) {
        int maxreach=0;
        int cnt=0;
       int end=0;
        for(int i=0;i<nums.size()-1;i++){
            maxreach=max(maxreach,i+nums[i]);
            if(end==i){
                cnt++;
                end=maxreach;
            }
           
            

        }
        return cnt;
        
    }
};
