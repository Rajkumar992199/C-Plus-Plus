#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n;
        set<long long> s;
        for (long long i = 0; i < n; i++) {
            cin >> k;
            s.insert(k);
        }
        if (s.size() < n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
