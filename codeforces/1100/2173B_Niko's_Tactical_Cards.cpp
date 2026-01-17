#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n;
        cin >> n;
        vector<long long> a(n), b(n), state1(n + 1, 0), state2(n + 1, 0);
        for (int i = 0; i < n; ++i) 
            cin >> a[i];
        
        for (int i = 0; i < n; ++i) 
            cin >> b[i];

        state1[n] = 0;
        state2[n] = INT_MIN;
        for (int i = n - 1; i >= 0; --i) {
            state1[i] = max(state1[i + 1] - a[i], state2[i + 1] - b[i]);
            state2[i] = max(state2[i + 1] + a[i], state1[i + 1] + b[i]);
        }
        cout << max(state1[0], state2[0]) << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
}
