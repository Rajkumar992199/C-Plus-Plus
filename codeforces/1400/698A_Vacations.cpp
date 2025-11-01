#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    int n, ans = 0;
    cin >> n;
    vector<int> a(n); 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        // it will do totally opposite of previous day 
        // i.e, a[i - 1] = 1 then a[i] = 2, visa versa, 
        // if 0 then it have choice of 1 or 2 (depends on next day)
        if(a[i] == 3 && i && a[i - 1] != 3) 
            a[i] -= a[i-1]; 
        if(a[i] == 0 || a[i] == a[i-1] && a[i] != 3) {
            ans++;
            a[i] = 0;
        }
    }
    cout << ans;
} 