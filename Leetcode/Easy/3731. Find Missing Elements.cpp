class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        vector<bool> seen(101, false);
        int mx = 0, mn = 101;
        for(auto it: nums) {
            seen[it] = true;
            mx = max(mx, it);
            mn = min(mn, it);
        }
        for(int i = mn; i <= mx; i++) 
            if(!seen[i])
                ans.push_back(i);
        
        return ans;
    }
};