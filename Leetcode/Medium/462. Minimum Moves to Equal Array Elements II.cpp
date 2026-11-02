class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int median = nums[nums.size()/2];
        long long ans = 0;
        for (int num : nums) 
            ans += abs(num - median);
            
        return ans;
    }
};