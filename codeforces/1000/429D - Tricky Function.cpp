#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    long long ans = LLONG_MAX;
    vector<long long> a(n), pre(n + 1, 0);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        pre[i + 1] += a[i] + pre[i];
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < min(i + 10000ll, n); j++){
            int x = j - i;
            long long sum = pre[j + 1] - pre[i + 1];
            ans = min(ans, (sum * sum) + (x * x));
        }
    }
    cout << ans << endl;
    
    return 0;
}