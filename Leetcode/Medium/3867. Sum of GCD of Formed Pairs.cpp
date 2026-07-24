class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx = 0, n = nums.size();
        vector<int> pre(n);
        for(int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            pre[i] = __gcd(mx, nums[i]);
        }
        sort(pre.begin(), pre.end());
        long long sum = 0;
        for(int i = 0; i < n / 2; i++) 
            sum += __gcd(pre[i], pre[n - i - 1]);
        return sum;
    }
};