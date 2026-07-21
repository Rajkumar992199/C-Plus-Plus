class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones = 0, i = 0, n = s.size(), first = 0;
        for(char c : s)
            if(c == '1')
                ones++;   
        int ans = ones;

        while(i < n && s[i] == '1')
            i++;

        while(i < n && s[i] == '0') {
            first++;
            i++;
        }
        while(i < n) {
            int middle = 0, last = 0;
            while(i < n && s[i] == '1') {
                middle++;
                i++;
            }
            if(middle == 0)
                break;
            while(i < n && s[i] == '0') {
                last++;
                i++;
            }
            if(last == 0)
                break;
                
            ans = max(ans, ones + first + last);
            first = last;
        }
        return ans;
    }
};