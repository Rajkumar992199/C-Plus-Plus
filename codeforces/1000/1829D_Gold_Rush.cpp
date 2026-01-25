#include <bits/stdc++.h>
using namespace std;

bool check(int n, int m) {
	if (n == m) 
        return true;
	else if (n % 3 != 0)   
        return false;
	else 
        return (check(n / 3, m) || check(2 * n / 3, m));
}

void solve() {
	int n, m;
	cin >> n >> m;
	cout << (check(n, m) ? "YES" : "NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}