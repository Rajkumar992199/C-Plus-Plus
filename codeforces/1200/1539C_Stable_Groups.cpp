#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k, x, ans = 1;
    cin >> n >> k >> x;

    vector<long long> a(n), b(n - 1);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    sort(a.begin(), a.end());

    for(int i = 0; i < n - 1; i++)
        b[i] = max(0ll, (a[i + 1] - a[i] - 1) / x);
    sort(b.begin(), b.end());
    
    for(int i = 0; i < n - 1; i++) {
        if(k >= b[i]) k -= b[i];
        else ans++;
    }
    cout << ans;
    return 0;
}