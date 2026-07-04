#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, idx = 0;
    cin >> n;
    vector<long long> a(n);
    long long mn = LLONG_MAX, gcd = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i]; 
        if(mn > a[i]) {
            mn = a[i];
            idx = i;
        }
    }

    bool got = false;
    for(int i = 0; i < n; i++) {
        if(i == idx)
            continue;

        if(a[i] % mn == 0) {
            gcd = __gcd(gcd, a[i]);
            if(gcd == mn) {
                got = true;
                break;
            }
        }
    }

    if(got)
        cout << "YES\n";
    else
        cout << "NO\n";
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
