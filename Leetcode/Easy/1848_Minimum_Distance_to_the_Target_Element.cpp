class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int t1 = INT_MAX, t2 = INT_MAX;
        for(int i = start; i >= 0; i--) {
            if(nums[i] == target) {
                t1 = start - i;
                break;
            }
        }
        for(int i = start; i < nums.size(); i++) {
            if(nums[i] == target) {
                t2 = i - start;
                break;
            }
        }
        return min(t1, t2);
    }
};