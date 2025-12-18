class Solution {
public:
    int countOperations(int num1, int num2) {
        int ans = 0;  // total number of subtraction operations
        while (num1 && num2) {
            // each step of the Euclidean algorithm
            ans += num1 / num2;
            num1 %= num2;
            swap(num1, num2);
        }
        return ans;
    }
};