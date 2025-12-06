#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, c, sum = 0, ans = 0;
    cin >> n >> c; 
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] += i + 1;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        sum += a[i];
        if(sum <= c) ans++;
        else break;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
}
