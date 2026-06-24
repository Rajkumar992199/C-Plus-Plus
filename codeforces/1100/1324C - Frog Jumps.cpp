#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
    cin >> s;
    int n = s.size(), mx = 0, idx = -1;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') {
            mx = max(mx, i - idx);
            idx = i;
        }
    }
    mx = max(mx, n - idx); // last jump

    if(idx == -1)
        mx = n + 1;

    cout << mx << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
		solve();

    return 0;
}
