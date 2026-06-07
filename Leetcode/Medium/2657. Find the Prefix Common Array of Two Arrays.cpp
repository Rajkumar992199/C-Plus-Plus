class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size(), cnt = 0;
        vector<int> x(n + 1, 0), ans;
        for(int i = 0; i < n; i++) {
            x[A[i]]++;
            x[B[i]]++;
            if(A[i] == B[i])
                cnt++;
            else {
                if(x[B[i]] == 2)
                    cnt++;
                if(x[A[i]] == 2)
                    cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};