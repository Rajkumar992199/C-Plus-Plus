class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0, ans = 0;
        for(auto it : apple)
            sum += it;
        sort(capacity.rbegin(), capacity.rend());
        for(auto it : capacity){
            if(sum <= 0) break;
            sum -= it;
            ans++;
        }
        return ans;
    }
};