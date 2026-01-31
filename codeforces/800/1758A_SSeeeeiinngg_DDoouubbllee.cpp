#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    cout << s << t << endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
	cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
