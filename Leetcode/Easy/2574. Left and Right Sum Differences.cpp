class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n + 1, 0), ans;

        for(int i = 1; i <= n; i++) 
            pre[i] = pre[i - 1] + nums[i - 1];

        for(int i = 0; i < n; i++) 
            ans.push_back(abs(pre[n] - pre[i + 1] - pre[i]));

        return ans;
    }
};