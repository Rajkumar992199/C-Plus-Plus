#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, a, b;
	string s;
	cin >> n >> a >> b >> s;
	vector<int> v;
	int cur = 0;
	for (int i = 0; i < n; i++) {
		if(s[i] == '.') 
            cur++;
		else {
			if(cur > 0) 
                v.push_back(cur);
			cur = 0;
		}
	}
	if(cur > 0) 
        v.push_back(cur);
	int ans = 0;
	for (int x : v) {
		int c1 = (x + 1) / 2, c2 = x / 2;
		if(a >= b) {
			if(a >= c1) {
				ans += c1;
				a -= c1;
			}
			else {
				ans += a;
				a = 0;
			}

			if(b >= c2) {
				ans += c2;
				b -= c2;
			}
			else {
				ans += b;
				b = 0;
			}
		}
		else {
			if (a >= c2) {
				ans += c2;
				a -= c2;
			}
			else {
				ans += a;
				a = 0;
			}
			if (b >= c1) {
				ans += c1;
				b -= c1;
			}
			else {
				ans += b;
				b = 0;
			}
		}
		if (a == 0 && b == 0) 
            break;
	}
	cout << ans;
    
    return 0;
}