class Solution {
public:
    int passwordStrength(string password) {
        vector<int> points(4);
        map<char, int> cnt;
        for(char c: password) {
            if(cnt[c])
                continue;
            cnt[c]++;
            if(c >= 'a' && c <= 'z')
                points[0]++;
            else if(c >= 'A' && c <= 'Z')
                points[1]++;
            else if(c >= '0' && c <= '9')
                points[2]++;
            else if(c == '!' || c == '@' || c == '#' || c == '$')
                points[3]++;
        }
        int ans = points[0] * 1 + points[1] * 2 + points[2] * 3 + points[3] * 5;
        return ans;
    }
};