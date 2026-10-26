
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), pre(n+1,0);

    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) 
        pre[i+1] = pre[i]+a[i];

    int l = 0, r = n-1;
    long long ans=0;
    while(l < r) {
        while(l < r && s[l] != 'L')
            l++;

        while(l < r && s[r] != 'R')
            r--;

        if(l < r) {
            ans += pre[r+1]-pre[l];
            l++;
            r--;
        }
    }

    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) 
        solve();

    return 0;
}