
#include<cstring>
class Solution {
public:
int t[21][1001];
int n;
int solve(vector<int>& nums,int i, int target){
    if(i==n)return target==0;
    

    if(t[i][target+1000]!=-1)return t[i][target+1000];
 
    
    int  add=solve(nums,i+1,target+nums[i]);
    
    int minus=solve(nums,i+1,target-nums[i]);
    return t[i][target+1000]=add+minus;
}

    int findTargetSumWays(vector<int>& nums, int target) {
        n=nums.size();
        memset(t,-1,sizeof(t));
        return solve(nums,0,target);
    }
};
