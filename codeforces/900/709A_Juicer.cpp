#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, b, d, sum = 0, ans = 0;
    cin >> n >> b >> d;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= b) {
            sum += a[i];
            if (sum > d) {
                sum = 0;
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}