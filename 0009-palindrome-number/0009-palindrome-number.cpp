class Solution {
public:
    bool isPalindrome(int x) {
        long long int num = x;
        long long int ans = 0;
        while(x > 0) {
            int lastDigit = x % 10;
            ans = ans * 10 + lastDigit;
            x = x / 10;
        }
        if(ans == num) {
            return true;
        }else {
            return false;
        }
    }
};