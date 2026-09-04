#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    string s(n, 'a');
    long long x = 0;
    int idx = -1;
    for(int i = 2; i <= n; i++) {
        long long temp = 1LL * i * (i - 1) / 2;
        if(temp <= k) {
            x = temp;
            idx = i;
        }
        else 
            break;
    }

    int idx2 = idx-1;
    if(k - x) {
        idx++;
        idx2 = k - x;
    }
    s[n - idx] = 'b';
    s[n - idx2] = 'b';
    cout << s << endl;
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