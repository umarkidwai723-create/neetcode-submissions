
#include<cstring>
class Solution {
public:
int t[101];
int n;
int solve(string &s,int i){
    if(i==n)return 1;
    if(s[i]=='0')return 0;
    if(t[i]!=-1)return t[i];
    int one=solve(s,i+1);
    int two=0;
    if(i+1<n){
        if(s[i]=='1' ||(s[i]=='2' && s[i+1]<'7')){
            two=solve(s,i+2);
        }
    }
    return t[i]=one+two;
}
    int numDecodings(string s) {
        n=s.size();
        memset(t,-1,sizeof(t));
        return solve(s,0);
        
    }
};
