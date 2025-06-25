#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans, sub;
        cin >> n;
        long long neg = log2(n);
        ans = n * (n + 1) / 2; // sum without substracting 2's powers
        sub = (1LL << (neg + 1)) - 1; // 2's powers sum
        ans -= 2 * sub; //substracting 2's powers sum
        cout << ans << endl;
    }
    return 0;
}