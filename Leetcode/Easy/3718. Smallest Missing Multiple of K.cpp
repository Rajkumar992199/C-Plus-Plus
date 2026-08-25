class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, bool> div;
        for(auto it: nums) 
            if(it % k == 0)
                div[it] = true;
        
        int n = k;
        while(div[n] == true) 
            n += k;
        
        return n;
    }
};