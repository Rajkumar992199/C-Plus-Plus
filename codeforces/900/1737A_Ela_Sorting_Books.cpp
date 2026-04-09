#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k;
    string s, ans;
    cin >> n >> k >> s;
    vector <int> v(26);
    for (char c: s)
		v[c - 'a']++;

    for (int i = 0; i < min(25, n/k); i++) {
        while (k - ans.size() > v[i]) 
        	ans.push_back(i + 'a');
    }
 
    char c = 'a' + min(n / k, 25);
    while (k > ans.size()) 
        ans += c;
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}