class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupsize) {
        int n=hand.size();
        map<int,int>mp;
        if(n%groupsize!=0)return false;
        for(int i=0;i<n;i++){
            mp[hand[i]]++;
        }

        for(auto it:mp){
            int card=it.first;
            int freq=it.second;
            if(freq>0){
                for(int i=0;i<groupsize;i++){
                     if (mp[card + i] < freq) {
                        return false;
                    }
                    mp[card+i]-=freq;
                }
            }
        }return true;

    
    }

};
