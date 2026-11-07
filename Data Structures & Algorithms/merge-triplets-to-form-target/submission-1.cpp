class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int  n=triplets[0].size();
        int m=triplets.size();
        vector<int>result;
       

        for(int i=0;i<n;i++){
             int ans = INT_MIN;
            for(int j=0;j<m;j++){
                 if(triplets[j][0] <= target[0] &&
           triplets[j][1] <= target[1] &&
           triplets[j][2] <= target[2]) {
                ans=max(ans,triplets[j][i]);
           } 
            }
            result.push_back(ans);
        }
        if(result==target)return true;
        else{
            return false;
        }
        

        
    }
};
