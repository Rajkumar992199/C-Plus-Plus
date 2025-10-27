#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;
 
    for (int i = 0; i * 2 < n; ++i) 
        ans += a[n - i - 1] - a[i];
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