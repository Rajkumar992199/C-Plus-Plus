#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, ans = 0;
	cin >> n;

	vector<int> temp(n, 1), a;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> x;

			if(x == 1)
				temp[i] = 0;
			else if(x == 2)
				temp[j] = 0;
			else if(x == 3) {
				temp[j] = 0;
				temp[i] = 0;
			}
		}
	}
	
	for(int i = 0; i < n; i++) {
		if(temp[i]) {
			ans++;
			a.push_back(i + 1);
		}
	}

	cout << ans << endl;
	for(auto it : a)
		cout << it << " ";
	cout << endl;

	return 0;
}