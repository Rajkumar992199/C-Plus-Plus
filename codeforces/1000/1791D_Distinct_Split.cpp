#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        string s;
        cin >> n >> s;
        unordered_set<char> st;
        vector<long long> prefix(n + 1, 0), suffix(n + 1, 0);
        for (long long i = 1; i <= n; i++) {
            st.insert(s[i - 1]);
            prefix[i] = st.size();
        }
        st.clear();
        for (long long i = n; i >= 1; i--) {
            st.insert(s[i - 1]);
            suffix[i] = st.size();
        }
        long long ans = 0;
        for (long long i = 0; i < n; i++) ans = max(ans, prefix[i] + suffix[i + 1]);
        cout << ans << endl;
    }
    return 0;
}
