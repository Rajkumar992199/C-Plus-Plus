#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	long long t, s, x;
	cin >> t >> s >> x;
	x -= t;

	if(x == 0)
		cout << "YES\n";
	else if(x < s) 
		cout << "NO\n";
	else if(x % s == 1 || x % s == 0) 
		cout << "YES\n";
	else 
		cout << "NO\n";

	return 0;
}