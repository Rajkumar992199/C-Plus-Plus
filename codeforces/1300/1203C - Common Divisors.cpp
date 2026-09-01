#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, gcd = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if(gcd == 1)
            continue;
        gcd = __gcd(x, gcd);
    }
    int cnt = 0;
    for (int i = 1; i * 1ll* i <= gcd; i++) {
        if (gcd % i == 0) {
            cnt++;
            if (gcd / i != i)
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}