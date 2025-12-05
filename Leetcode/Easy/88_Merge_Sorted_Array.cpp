class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.insert(nums1.begin() + m, nums2.begin(), nums2.begin() + n);
        nums1.erase(nums1.begin() + m + n, nums1.end());
        sort(nums1.begin() , nums1.end());
    }
};