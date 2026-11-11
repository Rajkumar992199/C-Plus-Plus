class Solution {
public:
    long long minimumCost(int cost1, int cost2, int both, int need1, int need2) {
        int mn = min(need1, need2);
        long long mix = min(1ll*mn*cost1+1ll*mn*cost2, 1ll*mn*both);
        long long diff1 = 1ll*max(0, need1-need2)*min(cost1, both);
        long long diff2 = 1ll*max(0, need2-need1)*min(cost2, both);
        return mix+diff1+diff2;
    }
};