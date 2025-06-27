#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n, m;
        cin >> x >> n >> m;
        while(n-- && x > 20) // Void Absorption spell only helps when hit point is greater than 20
            x = (x / 2) + 10;
        while(m--) x -= 10;
        if (x <= 0) cout << "YES\n";
        else cout << "NO\n"; 
    }
    return 0;
}