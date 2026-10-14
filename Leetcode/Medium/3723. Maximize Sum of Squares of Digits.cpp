class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) 
            return ""; 
        string ans;
        int nine = sum/9, last = sum%9;
        num -= nine+1;
        ans += string(nine, '9');
        if(num >= 0)
            ans += last+'0';
        if(num > 0)
            ans += string(num, '0');

        return ans;
    }
};