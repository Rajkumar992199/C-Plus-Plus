#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, n, sum = 0;
        cin >> n;
        while(n--) {
            cin >> a;
            sum += a;
        }
        if (sum % 2) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
