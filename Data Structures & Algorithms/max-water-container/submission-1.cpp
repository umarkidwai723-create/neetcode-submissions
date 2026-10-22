
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0, j = n - 1;
        int maxans = 0;

        while (i < j) {
            int ans = min(heights[i], heights[j]) * (j - i);
            maxans = max(maxans, ans);

            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }

        return maxans;
    }
};

