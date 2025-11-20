#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	// diff found or not, minimum index, maximum index 
	int flag = 0, l = 0, r = n - 1;
	for(int i = 0; i < n; i++) {
		cin >> b[i];
		if(a[i] != b[i]) { // array has been changed
			if(!flag) { 
				l = i;
				flag++; // change found
			}
			r = i;
		}
	}
	// if element sorted from the left side of l then l--
	while(l > 0 && b[l] >= b[l - 1]) 
		l--;
	// if element sorted from the right side of r then r++
	while(r < n && b[r] >= b[r - 1]) 
		r++;
	
	cout << l + 1 << " " << r << endl;
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) 
		solve();
}
