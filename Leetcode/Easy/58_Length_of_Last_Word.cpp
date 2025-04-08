class Solution {
    public:
        int lengthOfLastWord(string s) {
            int count = 0, flag = 0;
            for(int i = 0; i < s.size(); i++) {
                if (s[s.size() - i - 1] != ' ') {
                    flag++;
                    count++;
                }
                else if (flag > 0) break;
            }
            return count;
        }
    };