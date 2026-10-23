
#include<cstring>
class Solution {
public:
int t[40];
int solve(int i){
    if(i==0)return 0;
    if(i==2|| i==1)return 1;
    if(t[i]!=-1)return t[i];
    int ans=solve(i-1)+solve(i-2)+solve(i-3);
    return t[i]=ans;
}
    int tribonacci(int n) {
        memset(t,-1,sizeof(t));
        return solve(n);
        
    }
};