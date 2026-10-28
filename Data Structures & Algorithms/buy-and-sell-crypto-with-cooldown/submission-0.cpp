#include<cstring>
class Solution {
public:
int t[5001][2];
int solve(vector<int>& prices,int i,int buy){
   
    if(i>=prices.size())return 0;
    if(t[i][buy]!=-1)return t[i][buy];
    int profit=0;
    if(buy==1){
        profit=max(-prices[i]+solve(prices,i+1,0),solve(prices,i+1,1));
    }
    else{
        profit=max(prices[i]+solve(prices,i+2,1),solve(prices,i+1,0));

    }
    return t[i][buy]=profit;


    
}
    int maxProfit(vector<int>& prices) {
        memset(t, -1, sizeof(t));
        return solve(prices, 0, 1);
    }
};
