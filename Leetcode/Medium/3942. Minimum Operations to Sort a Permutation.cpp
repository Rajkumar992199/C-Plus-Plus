class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), ans = INT_MAX;
        int idx0, idxn;

        for (int i = 0; i < n; i++) {
            if(nums[i] == 0) 
                idx0 = i;
            else if(nums[i] == n - 1)
                idxn = i;
        }
 
        bool sorted = true, rev = true;
        // checking the array if sorted or reverse sorted
        for (int i = 0; i < n; i++) { 
            if (nums[(idx0 + i) % n] != i) 
                sorted = false;
            if (nums[(idxn + i) % n] != (n - 1 - i)) 
                rev = false;
        }
            
        if (sorted) {
            // i left rotations
            ans = min(ans, idx0);
            // rev + n - i rotations + rev
            ans = min(ans, n - idx0 + 2);
        }
            
        if (rev) {
            // i left rotations + 1 rev
            ans = min(ans, idxn + 1);
            // rev + n - i rotations
            ans = min(ans, n - idxn + 1);
        }

        if(ans == INT_MAX)
            return -1;

        return ans;
    }
};