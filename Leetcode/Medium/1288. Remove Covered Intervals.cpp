class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) {
                 if (a[0] == b[0])
                     return a[1] > b[1]; 
                 return a[0] < b[0];
             });
        int r = -1, ans = intervals.size();
        for(auto it : intervals) {
            if (it[1] <= r)
                ans--;
            else
                r = it[1];
        }
        return ans;
    }
};