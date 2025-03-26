#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b, k = 0, ans = 0;
        cin >> n >> a >> b;
        if(b >= a) k = min(b - a, n);
        ans = (n - k) * a + ( (2 * b) - k + 1) * k / 2;
        cout << ans << endl;
    }
}