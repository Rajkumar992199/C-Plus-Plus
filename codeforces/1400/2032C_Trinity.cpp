#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
   	cin >> n;
   
    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int j = 2, ans = n;
    for (int i = 0; i < n - 1; i++) {
        j = max(j, i + 2);
        while (j < n && a[i] + a[i + 1] > a[j]) 
            j++;
        
        ans = min(ans, n - (j - i));
    }

    cout << ans << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}