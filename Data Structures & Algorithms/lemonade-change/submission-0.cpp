class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt_5=0;
        int cnt_10=0;
      int n=bills.size();
        if(bills[0]!=5)return false;
        else{
             for(int i=0;i<n;i++){
                
            if(bills[i]==5)cnt_5++;
            else if(bills[i]==10){
                if(cnt_5>0){
                    cnt_10++;
                    cnt_5--;
                }
                 else{
                        return false;

                    }
            }
           else{
                if(cnt_10>0 ){
                    if(cnt_5>0){
                        cnt_5--;
                        cnt_10--;
                        
                    }
                    else{
                        return false;

                    }
                    
                }
                else{
                    if(cnt_5>2){
                        cnt_5-=3;
                    }
                     else{
                        return false;

                    }
                }
            }
        }return true;

        }
       
    }
};