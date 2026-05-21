#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, ans = INT_MAX;
    cin >> n >> m;

    vector<long long> a(n), last(m, -1), mx(m, -1), sec(m, -1);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        long long dist = i - last[a[i] - 1] - 1, idx = a[i] - 1;
        if(mx[idx] == -1) 
            mx[idx] = i;
        else if(dist >= mx[idx]) {
            sec[idx] = mx[idx];
            mx[idx] = dist;
        }
        else {
            long long sc = sec[idx];
            sec[idx] = max(sc, dist);
        }
        last[idx] = i;
    }

    for(int i = 0; i < m; i++) {
        long long dist = n - last[i] - 1;
        if(dist >= mx[i]) {
            sec[i] = mx[i];
            mx[i] = dist;
        }
        else {
            long long sc = sec[i];
            sec[i] = max(sc, dist);
        }

        long long temp = max(mx[i] / 2, sec[i]); 
        ans = min(ans, temp); 
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