#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	string s;
	cin >> n >> s;

	bool odd = false, even = false;
	for(int i = 0; i < n; i++) {
		if (i % 2 == 1) 
            even |= ((s[i] - '0') % 2 == 0);
		else 
            odd |= ((s[i] - '0') % 2 == 1);
	}

	if (n % 2 == 1) 
        cout << (odd ? 1 : 2) << endl;
    else 
        cout << (even ? 2 : 1) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
    cin >> t;
    while(t--)
	    solve();
	return 0;
}