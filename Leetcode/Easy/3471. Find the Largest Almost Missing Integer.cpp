class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> cnt;

        for (int i = 0; i < n; i++) 
            cnt[nums[i]]++;

        if (k == nums.size()) 
            return *max_element(nums.begin(), nums.end());

        if (k == 1) {
            int maxValue = -1;

            for (int i = 0; i < n; i++) 
                if (cnt[nums[i]] == 1 && nums[i] > maxValue) 
                    maxValue = nums[i];

            return maxValue;
        }

        if (nums[0] == nums[n-1]) 
            return -1;

        if (cnt[nums[0]] == 1 && cnt[nums[n-1]] == 1) 
            return max(nums[0], nums[n-1]);

        if (cnt[nums[0]] == 1) 
            return nums[0];

        if (cnt[nums[n-1]] == 1) 
            return nums[n-1];

        return -1;
    }
};