class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        int prefix = 0;
        vector<bool> ans;
        for(int i = 0; i < n; i++) {
            prefix = (prefix * 2 + nums[i]) % 5;
            ans.push_back(prefix == 0);
        }
        return ans;
    }
};