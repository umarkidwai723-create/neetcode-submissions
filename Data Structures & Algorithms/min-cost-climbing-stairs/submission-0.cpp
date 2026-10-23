
#include<cstring>
class Solution {
public:
int t[101];
int n;
int solve(vector<int>& cost,int i){
    if(i>=n)return 0;
   
    if(t[i]!=-1)return t[i];
    int onestep=cost[i]+solve(cost,i+1);
    int twostep=cost[i]+solve(cost,i+2);
    return t[i]=min(onestep,twostep);
}
    int minCostClimbingStairs(vector<int>& cost) {
        n=cost.size();
        memset(t,-1,sizeof(t));
        return min(solve(cost,0),solve(cost,1));
        
    }
};
