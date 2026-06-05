class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> ans(n);
        for(int i = 0; i < n; i++) {
            vector<int> rows(n);
            for(int j = n - 1; j >= 0; j--) 
                rows[n - j - 1] = matrix[j][i];
            ans[i] = rows;
        }
        matrix = ans;
    }
};