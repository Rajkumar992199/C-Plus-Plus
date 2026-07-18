class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx = 0, mn = 1001;
        for(auto it: nums) {
            mx = max(mx, it);
            mn = min(mn, it);
        }
        return __gcd(mx, mn);
    }
};