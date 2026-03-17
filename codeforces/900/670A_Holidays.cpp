#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, mx, mn;
	cin >> n;
		mn = 2 * (n / 7);
		mx = mn + min(2, n % 7);
		if(n % 7 == 6)
			mn++;
		cout << mn << " " << mx;
	return 0;
}