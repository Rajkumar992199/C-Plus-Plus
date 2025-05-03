#include <bits/stdc++.h>
using namespace std;
long long next_prime(long long n) {
    for (long long i = n;; i++) {
        bool isPrime = true;
        for (long long j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) return i;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long d;
        cin >> d;
        long long p = next_prime(d + 1);
        long long q = next_prime(p + d);
        long long a = min(1LL * p * p * p, 1LL * p * q);
        cout << a << endl;
    }
    return 0;
}
