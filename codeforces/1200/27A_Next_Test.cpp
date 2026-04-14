#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a.begin(), a.end());

    for(int i = 1; i <= n + 1; i++) {
        if(a[i - 1] != i) {
            cout << i;
            return 0;
        }
    }

	return 0;
}