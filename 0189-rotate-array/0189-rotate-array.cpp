class Solution {
public:
    void reversePart(vector<int>& nums, int start, int end) {
        int temp;
        while (start < end){
        temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start ++;
        end --;
        }
    }
    void rotate (vector <int> &nums, int k) {
        int n = nums.size();
        k = k % n;
        reversePart(nums, 0, n - 1 );
        reversePart(nums, 0, k - 1);
        reversePart(nums, k , n - 1);
        
    }
};