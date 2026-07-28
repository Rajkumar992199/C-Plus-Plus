class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> cnt(26, 0);
        char mid = ' ';
        string ans;
        for(char c: s)
            cnt[c - 'a']++;
        
        for(int i = 0; i < 26; i++) {
            if(mid == ' ' && cnt[i] % 2)
                mid = (i + 'a');
            cnt[i] /= 2;
            for(int j = 0; j < cnt[i]; j++)
                ans += (i + 'a');
        }
        if(mid != ' ')
            ans += mid;

        for(int i = 25; i >= 0; i--) {
            for(int j = 0; j < cnt[i]; j++)
                ans += (i + 'a');
        }
        return ans;
    }
};