#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
        
    if(a > b)
        swap(a, b);

    int sub = min(a, b-a);
    a -= sub;
    b -= 2*sub;
    
    if(a == b && (a+b)%3 == 0) 
        cout << "YES\n";
    else 
        cout << "NO\n";
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