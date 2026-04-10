#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, exc = 0, x;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> x; // elements
        x = abs(x - i - 1); // pos diff from sorted 
        exc += (x % k != 0); // no. of elements required preliminary exchange
    }

    if(exc == 0) // no preliminary exchange required
        cout << 0 << endl;
    else if(exc == 2) // 1 preliminary exchange required
        cout << 1 << endl;
    else // more than one preliminary exchange required
        cout << -1 << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}