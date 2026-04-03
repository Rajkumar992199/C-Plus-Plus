#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt1 = 0, cnt2 = 0, ans;
	cin >> n;

	vector<int> a(n);

	for(int i = 0; i < n; i++) {
		cin >> a[i];

		if(a[i] == 1)
			cnt1++;
		else if(a[i] == 2)
			cnt2++;
	}

	int cnt3 = n - cnt1 - cnt2;
	
	ans = n - max(cnt1, max(cnt2, cnt3));
	cout << ans;

	return 0;
}