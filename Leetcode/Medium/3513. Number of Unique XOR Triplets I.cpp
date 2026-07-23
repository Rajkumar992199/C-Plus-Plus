class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size(), lg = log2(n);
        return 1 << (lg - 3/(n+1) + 1);
    }
};