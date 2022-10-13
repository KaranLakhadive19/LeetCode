class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        while(n > 0) {
            int lastDigit = n % 10;
            sum = sum + lastDigit;
            product = product * lastDigit;
            n = n / 10;
        }
        return product - sum;
    }
};