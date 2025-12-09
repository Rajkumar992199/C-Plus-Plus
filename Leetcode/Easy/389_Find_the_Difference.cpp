class Solution {
public:
    char findTheDifference(string s, string t) {
        s += t;
        char ans;
        sort(s.begin(), s.end());
        for(int i = 0; i < s.size(); i += 2) {
            if(s[i] != s[i + 1]) {
                ans = s[i];
                break;
            }
        }
        return ans;
    }
};