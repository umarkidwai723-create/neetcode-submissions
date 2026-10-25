
#include<cstring>
class Solution {
public:
int t[1001];
int n;
bool solve(string s, vector<string>& wordDict,int i){
    if(i==n)return true;
   if(t[i]!=-1)return t[i];
   for(int j=0;j<wordDict.size();j++){
       string word=wordDict[j];
       if(s.substr(i,word.size())==word){
        if(solve(s,wordDict,i+word.size()))return t[i]=1;
       }
    
   }
   return t[i]=0;
   



}
    bool wordBreak(string s, vector<string>& wordDict) {
       
          n = s.size();
        memset(t, -1, sizeof(t));

        return solve(s, wordDict, 0);

        
    }
};
