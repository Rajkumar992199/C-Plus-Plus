class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
        int n = ls.size(), m = ws.size();
        int mnl = INT_MAX, mnw = INT_MAX, ans1 = INT_MAX, ans2 = INT_MAX;

        for(int i = 0; i < n; i++) 
            mnl = min(mnl, ls[i] + ld[i]);
        
        for(int i = 0; i < m; i++) {
            mnw = min(mnw, ws[i] + wd[i]);
            ans1 = min(ans1, max(mnl, ws[i]) + wd[i]);
        }

        for(int i = 0; i < n; i++) 
            ans2 = min(ans2, max(mnw, ls[i]) + ld[i]);

        return min(ans1, ans2);
    }
};