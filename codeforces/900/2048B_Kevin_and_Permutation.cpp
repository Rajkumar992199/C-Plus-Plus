#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, ans = 0;
        cin >> n >> k;
		int count = n, l = 1;
		for (int i = 0; i < n; i++) {
			if(i % k == k - 1) {
				cout << l << " ";
				l++;
			}
			else {
				cout << count << " ";
				count--;
			}
		}
		cout << endl;
    }
}