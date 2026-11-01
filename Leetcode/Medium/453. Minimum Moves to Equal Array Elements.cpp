class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int n = nums.size(), sum = 0;

        for(int i = 0; i < n; i++) 
            sum += nums[i] - mn;
        
        return sum;
    }
};