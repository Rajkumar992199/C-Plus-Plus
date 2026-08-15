#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;
    if(n < 4)
        cout << 1 << endl;
    else 
        cout << min(abs(x1 - x2), n - abs(x1 - x2)) + k << endl;
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