class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>vec1(n,1);
        vector<int>vec2(n,1);

        for(int i=1;i<n;i++){
            if(ratings[i-1]<ratings[i]){
                vec1[i]=vec1[i-1]+1;


            }

        }
             for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                vec2[i] = vec2[i + 1] + 1;
            }
        }
        for(int i=0;i<n;i++){
            vec1[i]=max(vec1[i],vec2[i]);

        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=vec1[i];
        }
        return sum;

    }
};