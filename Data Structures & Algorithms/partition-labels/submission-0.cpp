class Solution {
public:
    vector<int> partitionLabels(string s) {
    vector<int>v(26,0);
    int n=s.size();
    vector<int>res;
    for(int i=0;i<n;i++){
        int idx=s[i]-'a';
        v[idx]=i;
    }
    int i=0;
    while(i<n){
        int end=v[s[i]-'a'];
        int j=i;
        while(j<end){
            end=max(end,v[s[j]-'a']);
            j++;

        }res.push_back(j-i+1);
        i=j+1;
    } return res;



    }
};
