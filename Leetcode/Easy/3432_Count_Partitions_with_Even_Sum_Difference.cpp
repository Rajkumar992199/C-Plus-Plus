class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        vector<long long> pre(n + 1, 0);
        for(int i = 1; i <= n; i++) 
            pre[i] = pre[i - 1] + nums[i - 1];
        if(pre[n] % 2) return 0;
        else return n - 1;
    }
};