#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool t_prime(long long x) {
    long long root = static_cast<int>(sqrt(x)); // storing int value in root
    if (fmod(sqrt(x), 1.0) != 0.0) return 0; // checking if sqrt is whole number
    else {
        if (isPrime(root)) return 1; // checking root is prime
        return 0; // the only answer is number should be square of prime number
    }
}

int main() {
    int n;
    cin >> n;
    long long x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x != 1 && t_prime(x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}