class Solution {
public:
    string addBinary(string a, string b) {
        string ans, pre;
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry) {
            if (i >= 0) carry += a[i--] - '0';
            if (j >= 0) carry += b[j--] - '0';

            pre = carry % 2 + '0';
            ans = pre + ans;
            carry /= 2;
        }
        return ans;        
    }
};