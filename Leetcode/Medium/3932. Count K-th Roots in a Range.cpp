class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        int mn = round(pow(l, 1.0 / k));
        int mx = round(pow(r, 1.0 / k));
            
        int ans = mx - mn + 1;
        if(pow(mn, k) > r || pow(mx, k) < l)
            ans = 0;
        if(pow(mn, k) < l)
            ans--;
        if(pow(mx, k) > r)
            ans--;
        return max(0, ans);
    }
};