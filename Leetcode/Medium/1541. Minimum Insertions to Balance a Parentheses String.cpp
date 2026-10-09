class Solution {
public:
    int minInsertions(string s) {
        int ans = 0, open = 0, n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') 
                open++;
            else {
                if (i < n - 1 && s[i + 1] == ')') 
                    i++;
                else 
                    ans++;

                if (open == 0) 
                    ans++;
                else 
                    open--;
            }
        }
        ans += 2*open;
        return ans;
    }
};