#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k, ans = 0;
    cin >> n >> k;

    vector<long long> a(n), cnt(31, 0);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        for(int j = 0; j <= 30; j++) 
            if(a[i] & (1 << j)) cnt[j]++;
    }
    for(int i = 30; i >= 0; i--) {
        if(k >= n - cnt[i]) {
            ans += pow(2, i);
            k -= n - cnt[i];
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();
}
