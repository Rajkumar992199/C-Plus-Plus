class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0, cnt = 1, ans = 0;
        while(n) {
            int digit = n % 10;
            if(digit) {
                ans += digit * cnt;
                cnt *= 10;
                sum += digit;
            }
            n /= 10;
        }
        return ans * sum;
    }
};