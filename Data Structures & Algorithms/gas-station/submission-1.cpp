class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();int gassum=0;
        int costsum=0;
        for(int i=0;i<n;i++){
            gassum+=gas[i];
            costsum+=cost[i];
        }int ans=0;
        int index=0;
        if(gassum<costsum)return -1;
        for(int i=0;i<n;i++){
            ans+=gas[i]-cost[i];
            if(ans>=0) index=min(index,i);
           
            
            if(ans<0){
                 ans=0;
                index=i+1;
                
            }    
               
               

        }
        return index;

    }
};
