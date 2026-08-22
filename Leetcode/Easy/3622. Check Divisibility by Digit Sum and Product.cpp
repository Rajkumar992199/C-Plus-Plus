class Solution {
public:
    bool checkDivisibility(int n) {
        long long prod = 1, sum = 0, temp = n;
        while(temp) {
            int x = temp%10;
            prod *= x;
            sum += x;
            temp /= 10;
        }
        if(n % (prod + sum) == 0) 
            return true;
        else 
            return false;
    }
};