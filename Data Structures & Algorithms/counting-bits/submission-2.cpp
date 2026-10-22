class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>ans; int cnt=0;
        for(int i=0;i<=n;i++){
            int x=i;
            while(x!=0){
                cnt+=(x&1);
                x=x>>1;
            }
            ans.push_back(cnt);
            cnt=0;



        }
        return ans;
    }
};
