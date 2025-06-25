#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        ans = n * (n + 1) * (n - 1) / 3;
        cout << ans << endl;
    }
    return 0;
}