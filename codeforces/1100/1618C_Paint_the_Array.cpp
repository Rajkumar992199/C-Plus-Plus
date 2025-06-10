#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, invalid = 0;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        long long result1 = a[0], result2 = a[1];
        for (int i = 2; i < n; i++) {
            if (i % 2 == 0) result1 = __gcd(result1, a[i]);
            else result2 = __gcd(result2, a[i]);
        }
        if (result1 == result2) {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (i % 2 == 1 && a[i] % result1 == 0) {
                invalid = 1;
                break;
            }
        }
        if (!invalid) {
            cout << result1 << endl;
            continue;
        }
        invalid = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && a[i] % result2 == 0) {
                invalid = 1;
                break;
            }
        }
        if (!invalid) {
            cout << result2 << endl;
            continue;
        }
        else cout << 0 << endl;
    }
    return 0;
}