#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;

    bool flag = true;

    for(int i = 1; i <= n; i++) {
        cin >> x;

        if(!flag)
            continue;

        if(x % i == 0 || i % x == 0) {
            x  = max(x/i, i/x); 
            if ((x & (x - 1)) != 0)
                flag = false;
        }
        else 
            flag = false;
    }

    cout << (flag ? "YES\n" : "NO\n");
    
}

int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}