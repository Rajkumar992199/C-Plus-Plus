#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, penalty = 0, a, mn1 = INT_MAX, mn2 = INT_MAX;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a;
		if(mn1 > mn2) 
			swap(mn1, mn2);
		if(mn1 >= a) 
			mn1 = a;
		else if(mn2 >= a) 
			mn2 = a;
		else {
			mn1 = a;
			// penalty increased
			penalty++;
		}
	}
	cout << penalty << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
	cin >> t;
	while(t--) 
		solve();
    return 0;
}
