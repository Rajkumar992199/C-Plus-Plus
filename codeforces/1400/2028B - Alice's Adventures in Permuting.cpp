#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, b, c; 
    cin >> n >> b >> c;
    if (c >= n) 
		cout << n << "\n";
	else if (b == 0) {
	    if (c >= n - 2) 
			cout << n - 1 << "\n";
        else 
			cout << -1 << "\n";
	} 
    else 
		cout << n - max(0ll, 1 + (n - c - 1) / b) << "\n";
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