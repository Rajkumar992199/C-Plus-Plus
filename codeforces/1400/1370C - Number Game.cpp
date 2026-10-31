#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if (x < 2) 
        return false;
    for (long long i = 2; i * i <= x; i++)
        if (x % i == 0) 
            return false;

    return true;
}

void solve() {
    long long n;
    cin >> n;

    bool ashish;
    if (n == 1) 
        ashish = false;
    else if (n == 2 || n % 2 == 1) 
        ashish = true; // 2 or odd
    else if ((n & (n - 1)) == 0) 
        ashish = false; // power of 2, n > 2
    else if (n % 4 != 0 && isPrime(n / 2)) 
        ashish = false;
    else 
        ashish = true;

    if(ashish)
        cout << "Ashishgup\n";
    else
        cout << "FastestFinger\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();
    
    return 0;
}