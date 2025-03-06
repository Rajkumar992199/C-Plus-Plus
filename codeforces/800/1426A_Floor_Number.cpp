#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while(t--){
        int ans = 0;
        cin >> n >> x;
        if ((n - 2) > 0) ans = ((n-2)/x) + 1 ;
        else ans++;
        if ((n - 2) > 0 && (n - 2) % x != 0) ans++;
        cout << ans << endl;
    }
}