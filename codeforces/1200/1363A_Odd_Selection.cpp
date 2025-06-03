#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n, c1 = 0, c2 = 0;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) c2++; // even number count
            else c1++; // odd number count
        }
        // if odd numbers have odd count then only if (x is even && there's no even) has no solution 
        if (c1 % 2 == 1 && (x % 2 != 0 || c2 > 0)) cout << "Yes\n";
        else {
            // if there's no odd number or n = x then there's no solution 
            if (c1 > 0 && n != x) {
                // if x is even and there's no even number then there's no solution
                if (x % 2 == 1 || (x % 2 == 0 && c2 > 0)) cout << "Yes\n";
                else cout << "No\n";
            }
            else cout << "No\n"; 
        }
    }
    return 0;
}
