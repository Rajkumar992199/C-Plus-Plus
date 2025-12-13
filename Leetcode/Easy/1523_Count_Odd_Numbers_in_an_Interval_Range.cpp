class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high - low + (low % 2) + (high % 2)) / 2;
        return ans;
    }
};