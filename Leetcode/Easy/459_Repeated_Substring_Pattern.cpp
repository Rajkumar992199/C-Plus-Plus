class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string c;
        for(int i = 0; i < s.size() / 2; i++) {
            c += s[i];
            string ans;
            if(s.size() % c.size() != 0) continue;
            for(int j = 0; j < s.size() / c.size(); j++) {
                ans += c;
            }
            if(ans == s) return true;
        }
        return false;
    }
};