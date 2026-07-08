class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.length();
        int MOD = 1000000007;
        vector<long long> pow(n + 1);
        pow[0] = 1;
        for(int i = 1; i <= n; i++) 
            pow[i] = (pow[i - 1] * 10ll) % MOD;

        vector<int> A(n + 1, 0), B(n + 1, 0), len(n + 1, 0);

        for (int i = 0; i < n; i++) {
            int d = s[i] - '0';            
            A[i + 1] = A[i] + d;
            
            if (d) {
                B[i + 1] = (B[i] * 10LL + d) % MOD;
                len[i + 1] = len[i] + 1;
            } 
            else {
                B[i + 1] = B[i];
                len[i + 1] = len[i];
            }
        }

        vector<int> res;
        res.reserve(queries.size());

        for (auto& q : queries) {
            int l = q[0], r = q[1] + 1;
            long long sub = B[l] * 1LL * pow[len[r] - len[l]] % MOD;
            long long x = (B[r] - sub + MOD) % MOD;

            res.push_back(x * (A[r] - A[l]) % MOD);
        }

        return res;
    }
};