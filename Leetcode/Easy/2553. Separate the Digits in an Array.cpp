class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int it : nums) {
            string s = to_string(it);
            for(char c : s)
                ans.push_back(c - '0');
        }
        return ans;
    }
};