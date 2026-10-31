
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        // Step 1: Count frequency
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        // Step 2: Max Heap
        priority_queue<pair<int,int>> pq;

        for(auto it : mp){
            pq.push({it.second, it.first});
        }

        // Step 3: Extract top K elements
        vector<int> ans;

        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};