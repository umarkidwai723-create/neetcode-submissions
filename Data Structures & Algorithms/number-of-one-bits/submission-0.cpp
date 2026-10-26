class Solution {
public:
    int hammingWeight(uint32_t n) {
        string ans="";
        while(n>0){
            ans+=(n%2)+'0';
            n/=2;
        }
        int cnt=0;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='1')cnt++;

        }
        return cnt;

    }
};
