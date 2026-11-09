class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());

        for(int i=0;i<n;i++){
            int a=intervals[i][0];
            int b=intervals[i][1];
            while(i<n-1 && b>=intervals[i+1][0]){
                b=max(b,intervals[i+1][1]);
                i++;

            }
            ans.push_back({a,b});
            
        }return ans;
    }
};


