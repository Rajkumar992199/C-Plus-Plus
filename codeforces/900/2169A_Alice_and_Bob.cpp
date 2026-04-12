#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, v, cnt = 0, total;
    cin >> n >> a;
    total = n;

    for(int i = 0; i < n; i++) {
        cin >> v;
        if(a > v)
            cnt++;
        else if(a == v)
            total--;
    }
    if(cnt > total - cnt) // need smaller number
        cout << a - 1 << endl;
    else // need bigger number
        cout << a + 1 << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}