class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0)
            return 1;
        int base = log2(n);
        return pow(2, base + 1) - n - 1;
    }
};