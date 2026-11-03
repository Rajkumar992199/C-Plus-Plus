class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = 0, n = nums.size(), sum = 0;
        
        for(auto it: nums) { 
            sum += it;
            mx = max(mx, it);
        }
    
        return n*mx - sum;
    }
};