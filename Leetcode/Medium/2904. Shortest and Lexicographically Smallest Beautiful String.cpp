class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<int> pos;
        for(int i = 0; i < s.size(); i++) 
            if(s[i] == '1')
                pos.push_back(i);

        if(pos.size() < k)
            return "";
        else {
            int l = -1, r = -1, len = INT_MAX;
            for(int i = 0; i < pos.size()-k+1; i++) {
                if(len > pos[i+k-1] - pos[i]) {
                    l = pos[i], r = pos[i+k-1];
                    len = pos[i+k-1] - pos[i];
                }
                else if(len == pos[i+k-1] - pos[i]) {
                    if(s.substr(pos[i], pos[i+k-1]-pos[i]+1) < s.substr(l, r-l+1))
                        l = pos[i], r = pos[i+k-1];
                }    
            }
            return s.substr(l, r-l+1);
        }
    }
};