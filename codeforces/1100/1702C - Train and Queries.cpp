#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    vector<long long> u(n);
    map<long long, int> left, right;

    for(int i = 0; i < n; i++) {
        cin >> u[i];
        if(!left[u[i]])
            left[u[i]] = i + 1;
        right[u[i]] = i + 1;
    }

    long long a, b;
    for(int i = 0; i < k; i++) {
        cin >> a >> b;
        if(left[a] > right[b])
            cout << "NO\n";
        else if(!left[a])
            cout << "NO\n";
        else
            cout << "YES\n"; 
    }
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}