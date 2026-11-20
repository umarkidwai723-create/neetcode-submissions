class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
      int m=mat.size();
      int n=mat[0].size();  
      vector<int>ans1;
      vector<int>ans2;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==0){
                ans1.push_back(i);
            ans2.push_back(j);

            }
            

        }
      }
      // row working
      for(int i=0;i<ans1.size();i++){
        int ind=ans1[i];
        for(int j=0;j<n;j++){
            mat[ind][j]=0;

        }

      }

       for(int i=0;i<ans2.size();i++){
        int ind=ans2[i];
        for(int j=0;j<m;j++){
            mat[j][ind]=0;

        }

      }
   
    }
};
