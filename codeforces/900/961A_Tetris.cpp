#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, x;
	cin >> n >> m;

	vector<int> cnt(n);
	for(int i = 0; i < m; i++) {
		cin >> x;
		cnt[x - 1]++;
	}

	sort(cnt.begin(), cnt.end());
	cout << cnt[0] << endl;
	
	return 0;
}