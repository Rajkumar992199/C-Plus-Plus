class Solution {
public:
    int climbStairs(int n) {
        int ans = 1, add = 1, temp;
        for (int i = 0; i < (n - 1); i++) {
            temp = ans;
            ans += add;
            add = ans - add;
        }
        return ans;
    }
};