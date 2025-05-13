#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, ans = 0, x, mn;
        cin >> n >> k;
		vector<int> a(n),c(k, 0);
		for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] >= k) continue;
            c[a[i]]++;
        }
		for (int i = 1; i <= (k/ 2); i++) {
            if (i == k - i) {
                ans += c[i] / 2;
                break;
            }
            mn = min(c[i], c[k - i]);
            ans += mn;
		}
        cout << ans << endl;
    }
}