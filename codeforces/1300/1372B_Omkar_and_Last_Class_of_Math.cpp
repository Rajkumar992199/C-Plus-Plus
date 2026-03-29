#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if(n % 2 == 0) 
        cout << n / 2 << " " << n / 2 << endl;
    else {
        int x = -1;
        for(int i = 3; i * i <= n; i++) {
            if(n % i == 0) {
                x = n / i;
                cout << x << " " << x * (i - 1) << endl;
                return;
            }
        }
        if(x == -1) 
            cout << 1 << " " << n - 1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
        solve();

    return 0;
}