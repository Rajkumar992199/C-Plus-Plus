#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, ans = 0;
    string s;
	cin >> n >> s;
    for(int i = 0; i < n; i++)
        if(s[i] != s[n - 1]) ans++;
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}
