class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        map<int, int> cnt;
        for(int i = 0; i <= n + 1; i++) {
            cnt[nums[i] - 1]++;
            if(cnt[nums[i] - 1] > 1)
                return nums[i];
        }
        return 0;
    }
};