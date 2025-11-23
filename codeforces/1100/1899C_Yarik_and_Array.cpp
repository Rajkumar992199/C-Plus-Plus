#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, sum = 0, ans = INT_MIN; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ans = max(a[i], ans); // max element
    }
    if(ans > 0) {
        if(a[0] > 0) sum += a[0];
        for(int i = 1; i < n; i++) {
            // if consecutive numbers have same parity or sum is negative then reset the sum
            if((a[i] + a[i - 1]) % 2 == 0 || sum < 0) 
                sum = 0; 
            // if sum reseted and first element is negative then ignored
            if(sum != 0 || a[i] > 0)  sum += a[i]; 
            ans = max(sum, ans); 
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}