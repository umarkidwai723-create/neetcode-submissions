
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.rbegin(), people.rend());

        int cnt = 0;
        int i = 0, j = n - 1;

        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                j--;
            }

            i++;
            cnt++;
        }

        return cnt;
    }
};
