#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    
    long long t = 1;
    if(a == 1) {
        if((t-n)%b == 0) 
            cout << "Yes\n";
        else
            cout << "No\n";
        return;
    }
    
    while(t <= n) {
        if((t-n)%b == 0) {
            cout << "Yes\n";
            return;
        }
        t *= a;
    }
    cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}