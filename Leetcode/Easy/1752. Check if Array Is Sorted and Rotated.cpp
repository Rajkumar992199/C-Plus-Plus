class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(), target, cnt = 0;
        bool ans = false;

        for(int i = 0; i < n; i++) {
            if(i == n - 1)
                target = 0;
            else
                target = i + 1;
            
            if(nums[i] > nums[target])
                cnt++;
        }
        if(cnt <= 1)
            ans = true;

        return ans;
    }
};