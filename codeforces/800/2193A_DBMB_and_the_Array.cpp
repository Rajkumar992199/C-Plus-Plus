#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, s, x;
    cin >> n >> s >> x;
    for(int i = 0; i < n; i++) {
        long long el;
        cin >> el;
        s -= el;
    }
    if(s < 0 || (s % x))
        cout << "NO\n";
    else    
        cout << "YES\n";
}

signed main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}