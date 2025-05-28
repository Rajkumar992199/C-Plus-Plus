#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (n % 2 == k % 2 && (k * k <= n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}