#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    map<long long, int> m;
    long long s = 0;
    m[0] = 1;
    for(int i = 0; i < n; i++) {
        if(i % 2)
            a[i] *= -1;
        s += a[i];
        if(m[s]) {
            cout << "YES\n";
            return;
        }
        m[s]++;
    }
    cout << "NO\n";
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
