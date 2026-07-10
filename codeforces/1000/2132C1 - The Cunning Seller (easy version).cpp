#include <bits/stdc++.h>
using namespace std;

map<long long, long long> pw;

void pwr() {
    pw[1] = 3;
    long long x = 1, y = 3;
    for(int i = 1; i < 21; i++) {
        x *= 3;
        y = 3 * x + i * (x / 3);
        pw[x] = y;
    }
}

void solve() {
    int n;
    cin >> n;
 
    pwr();
    long long ans = 0;
    while(n) {
        auto it = pw.upper_bound(n);
        it--;
        ans += (n / it->first) * it->second;
        n %= it->first;
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) 
        solve();
 
    return 0;
}