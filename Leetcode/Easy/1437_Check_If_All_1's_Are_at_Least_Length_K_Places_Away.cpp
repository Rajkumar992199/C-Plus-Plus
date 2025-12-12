class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(i > k) 
                sum -= nums[i - k - 1];
            if(sum > 1) 
                return false;
        }
        return true;
    }
};