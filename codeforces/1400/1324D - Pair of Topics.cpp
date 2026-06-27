#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, ans = 0; 
    cin >> n;
    vector<long long> a(n), b(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    for(int i = 0; i < n; i++) {
        cin >> x;
        a[i] -= x;
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
		if (a[i] <= 0) 
            continue;
		int pos = lower_bound(a.begin(), a.end(), -a[i] + 1) - a.begin();
		ans += i - pos;
	}

    cout << ans << endl;
}