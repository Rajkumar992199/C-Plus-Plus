class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(mp[nums[i]] == k)
                continue;
            mp[nums[i]]++;
            ans.push_back(nums[i]);
        }
        return ans;
    }
};