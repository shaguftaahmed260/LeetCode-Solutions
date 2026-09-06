class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.empty()) return 0;
        int n = nums.size();
        int lastNumber = nums[0];
        int longest = 1;
        int count = 1;
        for (int i = 0; i < n ; i++){
            if (nums[i] == lastNumber + 1){
                count ++;
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