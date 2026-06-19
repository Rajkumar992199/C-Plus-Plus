class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high = 0, temp = 0;
        for(auto it : gain) {
            temp += it;
            high = max(high, temp);
        }
        return high;
    }
};