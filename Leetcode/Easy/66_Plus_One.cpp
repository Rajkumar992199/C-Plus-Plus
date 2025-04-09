class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int l = digits.size();
            digits[l - 1]++;
            for (int i = 0; i < l; i++) {
                if (digits[l - i - 1] > 9) digits[l - i - 1] = 0;
                else break;
                if (l - i - 1 != 0) digits[l - i - 2]++;
            }
            if (digits[0] == 0) digits.insert(digits.begin(), 1);
            return digits;
        }
    };