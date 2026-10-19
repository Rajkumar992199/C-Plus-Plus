class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int big = 0, small = 0, n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] > target)
                big++;
            else if(nums[i] < target)
                small++;
        }

        vector<int> ans;

        for(int i = small; i < n-big; i++) 
            ans.push_back(i);

        return ans;
    }
};