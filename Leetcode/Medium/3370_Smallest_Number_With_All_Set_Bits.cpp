class Solution {
public:
    int smallestNumber(int n) {
        int k = log2(n);
        n = pow(2, k + 1) - 1;
        return n;
    }
};