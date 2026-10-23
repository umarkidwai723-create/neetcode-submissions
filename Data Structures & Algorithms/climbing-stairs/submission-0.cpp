#include <cstring>
class Solution {
public:
int t[100];
int solve(int n, int i ){
    if(i==n)return 1;
    if(i>n)return 0;
    if(t[i]!=-1)return t[i];
    int onestep=solve(n,i+1);
    int twostep=solve(n,i+2);
    return t[i]=onestep+twostep;

}
    int climbStairs(int n){
        memset(t,-1,sizeof(t));
        return solve(n,0);
    

        
    }
};
