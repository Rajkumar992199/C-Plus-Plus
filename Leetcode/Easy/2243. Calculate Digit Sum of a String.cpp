class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size() > k) {
            string b;
            int sum = 0, cnt = 0;
            for (char c : s) {
                sum += c - '0';
                cnt++;
                
                if (cnt == k) {
                    b += to_string(sum);
                    sum = 0;
                    cnt = 0;
                }
            }
            
            if (cnt > 0) 
                b += to_string(sum);
            
            s = b;
        }
        return s;
    }
};