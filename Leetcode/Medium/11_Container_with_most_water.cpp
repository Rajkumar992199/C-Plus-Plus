class Solution {
    public:
        int maxArea(vector<int>& height) {
            int n = 0, m = height.size() - 1, mx = 0;
            while (n < m) {
                int area = min(height[n], height[m]) * (m - n);
                mx = max(mx, area);
                if (height[n] < height[m]) n++;
                else m--;
            }
            return mx;
        }
    };