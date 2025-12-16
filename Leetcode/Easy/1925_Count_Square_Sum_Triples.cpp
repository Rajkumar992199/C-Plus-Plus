class Solution {
public:
    int countTriples(int n) {
        int res = 0;

        for (int a = 3; a <= n; a++) {
            for (int b = a + 1; b <= n; b++) {
                if(a == b) continue;
                int c = int(sqrt(a * a + b * b));
                if (c <= n && c * c == a * a + b * b) 
                    res += 2;
            }
        }
        return res;
    }
};