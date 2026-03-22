#include <bits/stdc++.h>
using namespace std;

void solve() {
	vector<int> v(4);
	for(int i = 0; i < 4; i++) 
		cin >> v[i];
	if(v[0] == v[2] && v[0] == v[1] + v[3])
		cout << "YES\n";
	else if(v[1] == v[3] && v[1] == v[0] + v[2])
		cout << "YES\n";
	else if(v[1] == v[2] && v[1] == v[0] + v[3])
		cout << "YES\n";
	else if(v[0] == v[3] && v[0] == v[1] + v[2])
		cout << "YES\n";
	else 
		cout << "NO\n"; 
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