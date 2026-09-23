#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x; 
    cin >> x;
		
	int n = 0;
	while (n*(n+1)/2 < x)
		n++;
		
	if (n*(n+1)/2 == x+1)
		n++;

	cout << n << '\n';
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