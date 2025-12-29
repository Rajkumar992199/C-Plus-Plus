#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

void solve(){
    long long n, k, ans = 1;
    cin >> n >> k;

    // count will be n^k with mod 1000000007
    while(k--) 
        ans = (ans * n) % mod;

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();
}
