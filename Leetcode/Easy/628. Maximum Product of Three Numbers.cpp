class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mx1 = -1000, mx2 = -1000, mx3 = -1000, mn1 = 0, mn2 = 0;

        for(int it : nums) {
            if(mx1 <= it) {
                mx3 = mx2;
                mx2 = mx1;
                mx1 = it;
            }
            else if(mx2 <= it) {
                mx3 = mx2;
                mx2 = it;
            }
            else if(mx3 <= it)
                mx3 = it;

            if(mn1 > it) {
                mn2 = mn1;
                mn1 = it;
            }
            else if(mn2 >= it)
                mn2 = it;
        }

        return max(mx1 * mx2 * mx3, mn1 * mn2 * mx1);
    }
};