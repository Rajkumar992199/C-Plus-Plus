#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n == 2) 
        return true;
    
    if (n % 2 == 0) 
        return false;
    
    for (long long i = 3; i * i <= n; i += 2) 
        if (n % i == 0) 
            return false;

    return true;
}

void solve() {
    long long a, b;
    cin >> a >> b;

    if(a - b == 1 && isPrime(a + b)) {
        cout << "YES\n";
        return;
    }  
    cout << "NO\n";
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