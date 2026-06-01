class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans = 0, n = cost.size();
        sort(cost.begin(), cost.end());
        for(int i = cost.size() - 1; i >= 0; i--) {
            if((n - i) % 3 == 0)
                continue;
            ans += cost[i];
        }
        return ans;
    }
};