class Solution {
    public:
        int strStr(string h, string n) {
            int s1 = h.size(), s2 = n.size(),ans = -1;
            for(int i  = 0; i < s1 - s2 + 1; i++) {
                int k = i, flag = 0, count = 0;
                for(int j  = 0; j < s2; j++) {
                    if(h[k] == n[j]) flag++;
                    k++;
                    if (flag == s2) {
                        count++;
                        ans = i;
                        break;
                    }
                }
                if (count > 0) break;
            }
            return ans;
        }
    };