class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> ans(n, vector<int>(m));

        k %= m * n;
        if(!k)
            return grid;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int temp = (i * m + j + k) % (m * n);
                ans[temp / m][temp % m] = grid[i][j];   
            }
        } 
        return ans;
    }
};