#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    stack<int> st;
    vector<bool> pending(n + 1, true);

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') 
            st.push(i+1);
        else if (s[i] == '2' && !st.empty()) {
            pending[st.top()] = false;
            st.pop();
        }
        else 
            pending[i+1] = false;
    }

    vector<int> ans;

    for (int i = 1; i <= n; i++) 
        if (pending[i])
            ans.push_back(i);

    cout << ans.size() << '\n';

    for (int x : ans)
        cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}