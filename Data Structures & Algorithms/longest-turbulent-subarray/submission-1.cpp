#include<cstring>
class Solution {
public:
      int t[10001][2];
    int n;
 

    int solve(vector<int>& arr, int type, int i) {
        if(i>=n-1)return 1;
        int ans=1;
        
        if(t[i][type] != -1)
            return t[i][type];


        if(type == 0){
            if(arr[i]<arr[i+1]){
                ans=1+solve(arr,1,i+1);
            }
        }
        else{
                        if(arr[i]>arr[i+1]){
                ans=1+solve(arr,0,i+1);
            }

        }
        
        return t[i][type] = ans;   



        
    }
    int maxTurbulenceSize(vector<int>& arr) {
         n=arr.size();
        memset(t,-1,sizeof(t));
        if(n==1)return 1;
         int ans=1;

        for(int i = 0; i < n; i++) {
            ans = max(ans, solve(arr,  0,i));
            ans = max(ans, solve(arr,  1,i));
        }
        return  ans;

    }
};