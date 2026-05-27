class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> A(26, 0), a(26, 0);
        for(char c : word) {
            if(c >= 'a') {
                if(A[c - 'a'])
                    a[c - 'a'] = -1;
                else
                    a[c - 'a'] = 1;
            }
            else 
                A[c - 'A'] = 1;
        }
        int ans = 0;
        for(int i = 0; i < 26; i++) {
            if(a[i] == -1)
                continue;
            else if(a[i] && A[i])
                ans++;
        }

        return ans;
    }
};