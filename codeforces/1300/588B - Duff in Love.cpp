#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = 1;

    for (long long p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            ans *= p;

            while (n % p == 0) 
                n /= p;
        }
    }

    ans *= n;

    cout << ans << '\n';

    return 0;
}