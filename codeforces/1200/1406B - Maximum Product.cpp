#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long ans = max({1ll*a[0]*a[1]*a[2]*a[3]*a[n-1], 1ll*a[0]*a[1]*a[n-1]*a[n-2]*a[n-3], 1ll*a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5]});
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}