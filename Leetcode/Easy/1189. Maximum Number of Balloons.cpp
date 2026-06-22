class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> f(5, 0);
        string s = "balon";
        for(char c: text) 
            for(int i = 0; i < 5; i++)
                f[i] += (s[i] == c); 
        
        return min(min(f[0], f[1]), min(f[4], min(f[2] / 2, f[3] / 2)));
    }
};