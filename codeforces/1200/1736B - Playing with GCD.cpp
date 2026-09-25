#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return a*b/__gcd(a, b);
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n+1);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    b[0] = a[0];

    for(int i = 1; i < n; i++) 
        b[i] = lcm(a[i], a[i-1]);
    
    b[n] = a[n-1]; 

    for(int i = 0; i < n; i++) {
        if(__gcd(b[i], b[i+1]) != a[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}