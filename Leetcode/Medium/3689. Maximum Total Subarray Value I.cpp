class Solution {
public:
    long long maxTotalValue(vector<int>& nums, long long k) {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        return k * (mx - mn);
    }
};