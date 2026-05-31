class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int mn = INT_MAX, n = nums.size(), ans = INT_MAX;
        vector<int> first(n + 1), second(n + 1), third(n + 1), count(n + 1);
        
        for(int i = 0; i < n; i++) {
            int x = nums[i];
            if(!count[x])
                first[x] = i;
            else if(count[x] == 1)
                second[x] = i;
            else if(count[x] >= 2) {
                third[x] = i;
                if(mn >= third[x] - first[x]) {
                    ans = min(ans, abs(first[x] - second[x]) + abs(third[x] - second[x]) + abs(first[x] - third[x]));
                    mn = third[x] - first[x];
                }
                first[x] = second[x];
                second[x] = third[x];
            } 
            count[x]++;
        }
    if(ans == INT_MAX)
        return -1;

    return ans;
    }
};