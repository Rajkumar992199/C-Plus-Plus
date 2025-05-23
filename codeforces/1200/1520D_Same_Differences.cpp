#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        long long ans = 0;
        cin >> n;
        map<int, long long> m;
        for (int i = 0; i < n; i++) {
            cin >> a;
            m[a - i]++;
        }
        for (auto it : m) {
            long long val = it.second;
            ans += (val * (val - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
