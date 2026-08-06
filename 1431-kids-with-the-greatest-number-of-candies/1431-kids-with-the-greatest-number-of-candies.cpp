class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = 0;
        int highestcandy = candies[0];
        for (int i = 1; i < candies.size(); i++){
            if ( candies[i] > highestcandy ){
                highestcandy = candies[i];
            }
        }
        vector<bool> ans;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= highestcandy) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};