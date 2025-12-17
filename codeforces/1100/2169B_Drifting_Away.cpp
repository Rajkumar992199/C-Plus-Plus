#include <bits/stdc++.h>
using namespace std;

void solve() {
	bool f = 0;
	string s;
	cin >> s;
	long long n = s.size();
	if(n == 1) {
		cout << 1 << endl;
		return;
	}
	for(int i = 0; i < n; i++){
		if(s[i] == '*' || s[i] == '>' && !f) {
			for(long long j = i + 1; j < n; j++) {
				if(s[j] == '*' || s[j] == '<') {
					cout << -1 << endl;
					return;
				}
			}
			f = 1;
		}
	}
	f = 1;
	long long ans = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '<') {
			ans++;
			for(long long j = i + 1; j < n; j++){
				if(s[j] == '>') {
					long long temp = 0;
					if(s[j - 1] == '*')
						temp++;
					ans = max(ans, n - j + temp);
					cout << ans << endl;
					return;
				}
				else ans++;
			}
			break;
		}
		else ans++;
	}
	cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
