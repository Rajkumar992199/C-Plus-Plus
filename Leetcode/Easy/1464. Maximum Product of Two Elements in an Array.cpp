class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx1 = 0, mx2 = 0;
        for(int it: nums) {
            if(it >= mx1) {
                mx2 = mx1;
                mx1 = it;
            }
            else if(it > mx2) 
                mx2 = it;
        }
        return (mx1 - 1) * (mx2 - 1);
    }
};