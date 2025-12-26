#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int l = 1, r = n, mn = 1, mx = n; 
    bool found = 0;

    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) 
        cin >> a[i];
    
    while(l < r) {
        if(a[l] == mn) 
            l++, mn++;
        if(a[l] == mx) 
            l++, mx--;
        if(a[r] == mn) 
            r--, mn++;
        if(a[r] == mx) 
            r--, mx--;
        
        if(a[l] != mn && a[l] != mx && a[r] != mn && a[r] != mx) {
            cout << l << " " << r << endl;
            found = 1;
            break;
        }
    }
    if(!found)
        cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();
}
