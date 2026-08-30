class Solution {
public
    int minimumDeletions(vectorint& nums) {
        int mx = 0, mn = 0;
        int n = nums.size();
        if(n == 1)
            return 1;
        
        for(int i = 0; i  n; i++){
            if(nums[i]  nums[mx])
                mx = i;
            if(nums[i]  nums[mn])
                mn = i;
            
        }
        if(mn  mx)
            swap(mn, mx);
        
        return min({n-mn, mx+1, n+mn+1-mx});
    }
};