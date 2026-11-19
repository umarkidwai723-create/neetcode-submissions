class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end()); 
        int maxcnt=1;
        int cnt=1;
        if(nums.size()==0)return 0;
        int n=nums.size();

        
        for(int i=0;i<n-1;i++){
            if(nums[i]+1==nums[i+1]){
                cnt++;
                maxcnt=max(cnt,maxcnt);
            }
            else if(nums[i]==nums[i+1])continue;
            else{
                cnt=1;
            }
        }
        return maxcnt;



        
    }
};
