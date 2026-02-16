#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, start = 0, ans = 0;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0 && start == i)
            start++;
        else if(a[i] == 0 && a[start] != 0) {
            a[i]++;
            a[start]--;
            ans++;
            while(a[start] == 0 && start <= i) 
                start++;
        } 
    }
    for(int i = 0; i < n; i++) 
        if(i != n - 1)
            ans += a[i];

    cout << ans << endl;
 }

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
        solve();

    return 0;
}