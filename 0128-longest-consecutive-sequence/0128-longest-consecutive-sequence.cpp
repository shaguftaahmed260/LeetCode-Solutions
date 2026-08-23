class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 0;
        int longest = 0;
        int lastNumber = INT_MIN;
        sort (nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == lastNumber + 1){
                count++;
                lastNumber = nums[i];
            }
            else if (nums[i] == lastNumber){

            }
            else {
                count = 1;
                lastNumber = nums[i];
            }
            longest = max(count,longest);
        }
        return longest;
    }
};