#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b, x1, x2;         
    cin >> a >> b;
    x1 = log2(a), x2 = log2(b);    
    if(x2 > x1)
        cout << -1 << endl;
    else if(a == b)
        cout << 0 << endl;
    else {
        long long x;
        x = a ^ b;
        if(a >= x)
            cout << 1 << endl << x << endl;
        else {
            int bit = floor(log2(x));
            cout << 2 << endl;
            long long p = 1 << bit;
            long long q = x ^ p;
            cout << q << " " << p << endl;
        }
    }
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