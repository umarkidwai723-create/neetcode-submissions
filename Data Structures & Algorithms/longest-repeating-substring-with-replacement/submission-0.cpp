class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int i=0;int n=s.size();
        int cnt=0;
        int maxfreq=0;
        int j=0;
        while(j<n){
            mp[s[j]]++;
            maxfreq=max(maxfreq,mp[s[j]]);
            if(j-i+1>maxfreq+k){
               
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            cnt=max(cnt,j-i+1);
            j++;

           


        }return cnt;
        
    }
};
