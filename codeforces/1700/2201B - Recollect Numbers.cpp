#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if(n > k || 2*n <= k) {
        cout << "NO\n";
        return;
    }
    k = k - n + 1;
    cout << "YES\n";
    if(k == 1)
        cout << "1 1 ";
    else {
        cout << "1 2 ";
        for(int i = 1; i < k-1; i++)
            cout << i << " " << i+2 << " ";
        cout << k-1 << " " << k << " ";
    }
    if(n > 1) {
        for(int i = k+1; i <= n; i++) 
            cout << i << " " << i << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}