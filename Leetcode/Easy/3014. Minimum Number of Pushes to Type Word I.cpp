class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size() / 8, mod = word.size() % 8;
        return 4 * n * (n+1) + mod * (n+1);
    }
};