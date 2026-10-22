class Solution {
public:
    int minOperations(string s) {
        char mn = s[0], mx = s[0];
        int n = s.size();
        bool cnt1 = true, cnt2 = true;
        for(int i = 1; i < n; i++) {
            if(s[i] == mn)
                cnt1 = false;
            if(s[i] == mx)
                cnt2 = false;
            if(mn > s[i]) {
                mn = s[i];
                cnt1 = true;
            }
            if(mx < s[i]) {
                mx = s[i];
                cnt2 = true;
            }
        }

        if(is_sorted(s.begin(), s.end()))
            return 0;
        else if(n == 2)
            return -1;
        else if(s[n-1] == mx || s[0] == mn)
            return 1;
        else if(s[n-1] == mn && s[0] == mx && cnt1 && cnt2)
            return 3;
        else
            return 2;
    }
};