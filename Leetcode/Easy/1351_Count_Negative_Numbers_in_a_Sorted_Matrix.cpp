class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0, m = grid.size(), n = grid[0].size();
        int j = 0, i = m - 1;
        while(i >= 0 && j < n) {
            if(grid[i][j] >= 0) 
                j++;
            else {
                ans += n - j;
                i--; 
            }
        }
        return ans;
    }
};