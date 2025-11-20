#include <bits/stdc++.h>
using namespace std;

void solve() {
    // number of cities, number of major cities, starting point, destination
    int n, k, a, b; 
    cin >> n >> k >> a >> b;
    
    // coordinates of cities
    vector<pair<long long, long long>> v(n);
    for(int i = 0; i < n; i++) 
        cin >> v[i].first >> v[i].second;

    long long ans = LLONG_MAX, distance1 = LLONG_MAX, distance2 = LLONG_MAX, temp;
    if(a <= k) {
        if(b <= k) ans = 0; // if a and b both major cities then cost is zero
        else { // if b is not a major city but a is then find nearest major city to b
            for(int i = 0; i < k; i++) {
                distance1 = abs(v[b - 1].first - v[i].first) + abs(v[b - 1].second - v[i].second);
                ans = min(ans, distance1);
            }
        }
    }
    else if(b <= k) { // if a is not a major city but b is then find nearest major city to a
        for(int i = 0; i < k; i++) {
            distance1 = abs(v[a - 1].first - v[i].first) + abs(v[a - 1].second - v[i].second);
            ans = min(ans, distance1);
        }
    }
    else { 
        // find direct cost
        ans = abs(v[a - 1].first - v[b - 1].first) + abs(v[a - 1].second - v[b - 1].second);
        // find nearest major cities to a and b
        for(int i = 0; i < k; i++) {
            temp = abs(v[a - 1].first - v[i].first) + abs(v[a - 1].second - v[i].second);
            distance1 = min(distance1, temp);
            temp = abs(v[i].first - v[b - 1].first) + abs(v[i].second - v[b - 1].second);
            distance2 = min(distance2, temp);
            ans = min(ans, distance1 + distance2);
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}