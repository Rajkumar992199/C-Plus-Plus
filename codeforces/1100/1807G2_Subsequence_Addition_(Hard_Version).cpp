#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int i = 0; i < n; i++) 
        cin >> c[i];

    sort(c.begin(), c.end());
    if(c[0] != 1) {
        cout << "NO\n";
        return;
    }
    long long sum = 1;
    for(int i = 1; i < n; i++) {
        if(c[i] > sum) {
            cout << "NO\n";
            return;
        }
        sum += c[i];
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) 
        solve();
    return 0;
}