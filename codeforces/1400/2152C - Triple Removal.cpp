#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) 
		cin >> a[i];

    vector<int> p0(n + 1), p1(n + 1);
    p0[0] = 0, p1[0] = 0;
    for (int i = 1; i <= n; i++) {
        p0[i] = p0[i - 1] + (a[i] == 0);
        p1[i] = p1[i - 1] + (a[i] == 1);
    }

    vector<int> v(n + 1, 0);
    for (int i = 1; i < n; i++) {
        v[i] = v[i-1];
        if (a[i] == a[i+1]) 
			v[i]++;
    }
	v[n] = v[n - 1];

    while (q--) {
        int l, r;
        cin >> l >> r;

        int num0 = p0[r] - p0[l - 1];
        int num1 = p1[r] - p1[l - 1];

             
        if (num0 % 3 != 0 || num1 % 3 != 0) {
            cout << -1 << endl;
            continue;
        }

        int check = 0;
        if (r - l >= 1) 
			check = v[r - 1] - v[l - 1];

        if (check == 0) 
            cout << num0/3 + num1/3 + 1 << endl;
        else 
            cout << num0/3 + num1/3 << endl;
    }
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
