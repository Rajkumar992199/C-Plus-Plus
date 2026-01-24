#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    if(n == 1) {
        cout << -1 << endl;
        return;
    }
    cout << 2;
    for(int i = 0; i < n - 1; i++)
        cout << 3;
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}