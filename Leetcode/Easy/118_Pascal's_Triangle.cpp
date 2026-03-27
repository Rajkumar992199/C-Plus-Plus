#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    long long n, m;
    cin >> n >> m;

    vector<pair<int, long long>> v(m);
    for(int i = 0; i < m; i++) {
        long long x, y;
        cin >> x >> y;
        v[i].first = y;
        v[i].second = x;
    }
    sort(v.rbegin(), v.rend());

    long long ans = 0;
    for(int i = 0; i < m; i++) {
        if(v[i].second <= n) {
            n -= v[i].second;
            ans += v[i].second * v[i].first;
        }
        else {
            ans += n * v[i].first;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}