class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long largest = LLONG_MIN;
        long long secondLargest = LLONG_MIN;
        long long thirdLargest = LLONG_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == largest || nums[i] == secondLargest || nums[i] == thirdLargest) {
                continue;
            }
            if (nums[i] > largest) {
                thirdLargest = secondLargest;
                secondLargest = largest;
                largest = nums[i];
            }

            else if (nums[i] > secondLargest) {
                thirdLargest = secondLargest;
                secondLargest = nums[i];
            }

            else if (nums[i] > thirdLargest) {
                thirdLargest = nums[i];
            }
        }

        if (thirdLargest == LLONG_MIN) {
            return largest;
        }

        return thirdLargest;
    }
};