class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size(), res = 0, l = 0;
        vector<int> f(26);

        for (int r = 0; r < n; r++) {
            f[s[r] - 'a']++;

            while (f[s[r] - 'a'] > 2) 
                f[s[l++] - 'a']--;

            res = max(res, r - l + 1);
        }
        return res;
    }
};