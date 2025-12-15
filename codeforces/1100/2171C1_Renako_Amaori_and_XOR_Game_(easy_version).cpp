#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	cin >> n;
    vector<int> a(n), b(n);
	bool AJISAI = false, MAI = false;
    
	for(int i = 0; i < n; i++)
		cin >> a[i], AJISAI ^= a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i], MAI ^= b[i];

    if(MAI == AJISAI) {
		cout << "TIE" << endl;
        return;
    }
    
	for(int i = 0; i < n; i++) {
		if(((i % 2 && !MAI) || (i % 2 == 0 && !AJISAI)) && (a[i] != b[i])) {
			MAI = !MAI;
			AJISAI = !AJISAI;
			continue;
		}
	}
	
	if(MAI)
		cout << "MAI" << endl;
	else
		cout << "AJISAI" << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
