#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c, r, total = 0;
    cin >> a >> b >> c >> r;
    
    if(a == b) {
        cout << 0 << endl;
        return;
    }

    if(a > b)
        swap(a, b);
    total += b - a;

    if(c - r > b || c + r < a) {
        cout << total << endl;
        return;
    }

    if(c - r <= b && c > a)
        total -= (min(c, b) - max((c - r), a)); 
    if(c + r >= a && c < b)
        total -= min(b, c + r) - max(c, a);
        
    cout << total << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
