#include <bits/stdc++.h>
using namespace std;

void solve() {
    // number of elements, number of operations
    int n, k; 
    cin >> n >> k;

    vector<long long> a(n), pre(n, 0); // elements, prefix sum
    long long ans = 0; // answer 

    for(int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a.begin(), a.end()); // sorting

    // prefix sum, if i = 0 then pre[i] += a[i] else pre[i] += pre[i - 1] + a[i]
    for(int i = 0; i < n; i++) 
        pre[i] += (i == 0? 0: pre[i - 1]) + a[i]; 

    int temp = k;
    for(int i = 0; i < k; i++) {
        // brute force
        ans = max(ans, pre[n - i - 1] - pre[temp * 2 - 1]);
        temp--;
    }

    // if we remove all maximum elements
    ans = max(ans, pre[n - k - 1]); 
    cout << ans << endl;
    return; 
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
        solve();

    return 0;
}