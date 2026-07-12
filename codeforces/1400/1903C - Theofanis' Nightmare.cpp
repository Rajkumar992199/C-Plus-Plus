#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
        
    for(int i = 1; i < n; i++) 
        a[n - i - 1] += a[n - i];
 
    long long ans = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < 0) 
            continue;
        else 
            ans += a[i];
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) 
        solve();
 
    return 0;
}