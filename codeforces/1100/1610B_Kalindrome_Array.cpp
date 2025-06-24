#include <bits/stdc++.h>
using namespace std;

long long xn = 2e5 + 10;
long long n, m;
vector<long long> a(xn), b(xn);
bool ans;

void solve(long long x) {
    m = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != x) {
            b[m] = a[i];
            m++;
        }
    }
    for (int i = 0; i < m; i++) 
        if (b[i] != b[m - i - 1]) return;
    ans = true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        ans = true;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            if (a[i] != a[n - i - 1]) {
                ans = false;
                solve(a[i]);
                solve(a[n - i - 1]);
                break;
            }
        }
        if (ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
