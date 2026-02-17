#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, mx = INT_MIN, mn = INT_MAX;
    long long cmx = 0, cmn = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(mx < a[i]) {
            mx = a[i];
            cmx = 1;
        }
        else if(mx == a[i])
            cmx++;

        if(mn > a[i]) {
            mn = a[i];
            cmn = 1;
        }
        else if(mn == a[i])
            cmn++;
    }
    if(mx == mn) 
        cout << (cmx - 1) * (cmx) << endl;
    else
        cout << 2 * cmx * cmn << endl;
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