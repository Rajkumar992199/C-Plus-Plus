class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(), l = 0, r = n - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[n - 1])
                l = mid + 1;
            else 
                r = mid;
        }

        int rot = l;
        l = 0, r = n - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            int idx = (mid + rot) % n;

            if (nums[idx] == target)
                return idx;

            if (nums[idx] < target) 
                l = mid + 1;
            else 
                r = mid - 1;
        }
        return -1;
    }
};