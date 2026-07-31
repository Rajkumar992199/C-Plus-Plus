class Solution {
public:
    int minimumPushes(string word) {
        vector<int> cnt(26,0);

        for (char c : word)
            cnt[c-'a']++;

        sort(cnt.rbegin(), cnt.rend());

        int ans = 0;
        for (int i = 0; i < cnt.size(); i++) 
            ans += cnt[i] * (i / 8 + 1);

        return ans;
    }
};