class Solution {
public:
    int maxProduct(int n) {
        int ans = 0, mx = -1;
        while(n) {
            int cur = n % 10;
            n /= 10;
            ans = max(ans, mx * cur);
            mx = max(mx, cur);
        }
        return ans;
    }
};