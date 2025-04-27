#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        long long a[n];
        vector<pair<long long, long long> > b(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = {a[i] - x, a[i] + x};
        } 
        long long ans = 0, l = b[0].first, r = b[0].second;
        for (long long i = 0; i < n; i++) {
            l = max(l , b[i].first);
            r = min(r, b[i].second);
            if (l > r){
                ans++;
                l = b[i].first;
                r = b[i].second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}