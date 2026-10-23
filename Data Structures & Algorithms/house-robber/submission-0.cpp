
#include<cstring>
class Solution {
public:
int t[101];
int n;
int solve(vector<int>& nums,int i){
    if(i>=n)return 0;

    if(t[i]!=-1)return t[i];
    int onegap=solve(nums,i+1);
    int twogap=nums[i]+solve(nums,i+2);
    return t[i]=max(onegap,twogap);
}

    int rob(vector<int>& nums) {
        n=nums.size();
        memset(t,-1,sizeof(t));
        return solve(nums,0);
        
    }
};
