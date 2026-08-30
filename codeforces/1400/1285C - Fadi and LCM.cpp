#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long x;
    cin >> x;
    long long ans;
    for(long long i = 1 ; i * i <= x ; i++)
        if(x % i == 0 && __gcd(i, x/i) == 1)
            ans = i;
    
    cout << ans << " " << x / ans << endl;
}