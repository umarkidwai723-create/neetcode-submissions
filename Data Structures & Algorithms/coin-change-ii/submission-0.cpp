#include<cstring>
class Solution {
public:
int t[101][5001];
int n;
int solve( vector<int>& coins,int amount,int i){
    if(amount ==0)return 1;
    if(i>=n)return 0;
    if(t[i][amount]!=-1)return t[i][amount];
    int take=0;
    if(amount>=coins[i]){
        take =solve(coins,amount-coins[i],i);
    }
    int skip=solve(coins,amount,i+1);
    return t[i][amount]=take+skip;

}
    int change(int amount, vector<int>& coins) {
        n=coins.size();
        memset(t,-1,sizeof(t));
        return solve(coins,amount,0);
    }
};
