#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return (a*b)/ __gcd(a, b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    int n;
    cin >> n;

    long long ans = n;
    if(n%2)
        ans = max(ans, 1ll*n*(n-1)*(n-2));
    else {
        ans = max(ans, 1ll*(n-1)*(n-2)*(n-3));
        for(int i = max(2,n-120); i < n-1; i++) 
            ans = max(ans,lcm(1ll*i, 1ll*n*(n-1)));
    }
    cout << ans;

    return 0;
}