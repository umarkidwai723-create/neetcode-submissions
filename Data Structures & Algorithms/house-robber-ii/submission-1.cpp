
#include<cstring>
class Solution {
public:
int t[101];
int n;
int solve(vector<int>& nums,int i,int n){
    if(i>=n)return 0;

    if(t[i]!=-1)return t[i];
    int onegap=solve(nums,i+1,n);
    int twogap=nums[i]+solve(nums,i+2,n);
    return t[i]=max(onegap,twogap);
}
    int rob(vector<int>& nums) {
        n=nums.size();
        if(n==1)return nums[0];
          memset(t, -1, sizeof(t));
        int first = solve(nums, 0, n - 1);

        memset(t, -1, sizeof(t));
        int second = solve(nums, 1, n);

        return max(first, second);

      
        
    }
};
