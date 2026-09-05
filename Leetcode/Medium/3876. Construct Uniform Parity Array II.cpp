class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = INT_MAX, cntOdd=0;
        for(int x: nums1){
            cntOdd += x%2;
            mn = min(mn, x);
        }
        return mn%2 || cntOdd==0;
    }
};