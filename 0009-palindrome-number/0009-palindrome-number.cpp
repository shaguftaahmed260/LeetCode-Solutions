class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int temp = x;
        int rev = 0;
        while ( x != 0){
        int lastdigit = x % 10;
        if  ( rev > INT_MAX / 10 || rev < INT_MIN / 10){
            return 0;
        }
        rev = rev * 10 + lastdigit;
        x = x / 10;
        }
        return rev == temp;
    }
};