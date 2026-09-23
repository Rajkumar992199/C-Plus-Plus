class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long total = 0;
        for(auto it : nums)
            total += it; 
        long long k = total - x, n = nums.size();
        if (k < 0) 
            return -1;
        else if (k == 0) 
            return n;

        long long ans = -1, i = 0, sum = 0;
        for (int j = 0; j < n; j++) {
            sum += nums[j];
            while (sum > k)
                sum -= nums[i++];

            if (sum == k)
                ans = max(ans, j - i + 1);
        }

        return ans == -1 ? -1 : n - ans;
    }
};