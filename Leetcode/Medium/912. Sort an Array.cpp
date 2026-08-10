class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> freq(100001, 0), ans;
        for(auto it: nums) 
            freq[it + 50000]++;
        
        for(int i = 0; i < 100001; i++) {
            while(freq[i]--)
                ans.push_back(i - 50000);
        }

        return ans;
    }
};