#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
    cin >> n;

    int ans = (sqrt(2*n-1)-1)/2;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}