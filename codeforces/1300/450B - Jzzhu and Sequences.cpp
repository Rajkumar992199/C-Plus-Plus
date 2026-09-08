#include <bits/stdc++.h>
using namespace std;

long long mod = 1000000007;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long x, y, n;
    cin >> x >> y >> n;

    vector<long long> f(6);
    f[0] = x-y, f[1] = x, f[2] = y, f[3] = y-x, f[4] = -x, f[5] = -y;

    long long ans = f[n%6];
    while(ans < 0) 
        ans += mod;
    
    cout << ans % mod;

    return 0;
}