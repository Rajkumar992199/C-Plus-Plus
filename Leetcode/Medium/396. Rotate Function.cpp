class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sum, mx = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            mx += i * nums[i];
        }

        long long ans = mx;
        for(int i = 0; i < n - 1; i++) {
            mx -= sum - n * nums[i];
            ans = max(ans, mx);
        }

        return ans;
    }
};