#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<pair<long long, long long>> a(n), b(n), c(n);
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }
    for(int i = 0; i < n; i++) {
        cin >> c[i].first;
        c[i].second = i;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(a[n - i - 1].second != b[n - j - 1].second
                     && c[n - k - 1].second != b[n - j - 1].second 
                     && a[n - i - 1].second != c[n - k - 1].second) {
                    long long sum = a[n - i - 1].first + b[n - j - 1].first + c[n - k - 1].first;
                    ans = max(ans, sum);
                }
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
