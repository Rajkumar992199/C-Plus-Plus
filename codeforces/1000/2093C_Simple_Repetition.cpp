#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, k;
        cin >> x >> k;
        if ((x == 1 && k == 2) || (k == 1 && isPrime(x))) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
