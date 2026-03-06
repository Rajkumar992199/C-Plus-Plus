#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    if(n == 3)
        cout << "NO";
    else if (n % 2 == 0) {
        cout << "YES\n";
        for(int i = 0; i < n; i++) {
            if(i % 2) 
                cout << 1 << " ";
            else
                cout << -1 << " ";
        }
    }
    else {
        cout << "YES\n";
        for(int i = 0; i < n; i++) {
            if(i % 2) 
                cout << (n / 2) << " ";
            else
                cout << 1 - (n / 2) << " ";
        }
    }

    cout << endl;
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