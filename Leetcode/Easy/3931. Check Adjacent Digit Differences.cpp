class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n = s.size();
        int m = s[0] - '0';
        for(int i = 1; i < n; i++) {
            int n = s[i] - '0';
            if(abs(n - m) > 2)
                return false;
            m = n;
        }
        return true;
    }
};