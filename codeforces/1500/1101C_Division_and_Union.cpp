#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    // pair of points, index
    vector<pair<pair<int, int>, int>> v(n);

    vector<int> ans(n, 2); // by default in group 2
    for(int i = 0; i < n; i++) {
        // pair of points
        cin >> v[i].first.first >> v[i].first.second;
        v[i].second = i; //index
    }
    sort(v.begin(), v.end());

    // by default smallest point in first group
    int one = v[0].first.second, possible = 0;
    ans[v[0].second] = 1; 
    for(int i = 0; i < n; i++) {
        // points belongs to first group
        if(v[i].first.first <= one) { 
            one = max(one, v[i].first.second);
            ans[v[i].second] = 1;
        }
        else { // other points belongs to second group
            possible++;
            break;
        }
    }

    // non-empty group is not possible
    if(!possible) cout << -1 << endl;
    else {
        for(int i = 0; i < n; i++) 
            cout << ans[i] << " ";
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
        solve();
}