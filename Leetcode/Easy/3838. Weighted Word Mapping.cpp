class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for(auto it: words) {
            int sum = 0;
            for(char c : it) 
                sum += weights[c - 'a'];
            sum %= 26;
            sum = 25 - sum;
            ans += 'a' + sum;
        }
        return ans;
    }
};