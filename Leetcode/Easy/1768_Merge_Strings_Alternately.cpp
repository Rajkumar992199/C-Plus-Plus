class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int l1 = word1.size();
        int l2 = word2.size();
        int len = min(l2, l1);
        for(int i = 0; i < len; i++) {
            ans += word1[i];
            ans += word2[i];
        }
        word1.erase(0, len);
        word2.erase(0, len);
        ans += word1 + word2;
        return ans; 
    }
};