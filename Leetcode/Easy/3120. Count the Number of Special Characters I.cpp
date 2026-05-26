class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> a(26, 0), A(26, 0);
        for(char c : word) {
                if(c >= 'a') 
                    a[c - 'a']++;
                else 
                    A[c - 'A']++;
        }
        int ans = 0;
        for(int i = 0; i < 26; i++) 
            if(A[i] && a[i])
                ans++;
                
        return ans;
    }
};