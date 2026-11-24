class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size(), ans = 2, l = 0, prod = 1;
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            while (gcd(prod, x) > 1)
                prod /= nums[l++];
            prod *= x;
            ans = max(ans, i-l+1);
        }
        return ans;
    }
};