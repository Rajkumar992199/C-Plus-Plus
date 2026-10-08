class Solution {
public:
    string removeOuterParentheses(string s) {
        int sum = 0;
        string ans;
        for(auto c : s) {
            if(c == ')')
                sum--;
            if(sum != 0)
                ans += c;
            if(c == '(')
                sum++;
        }
        return ans;
    }
};