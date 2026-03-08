#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if(b % 2 == c % 2)
        cout << "1 ";
    else
        cout << "0 ";

    if(a % 2 == c % 2)
        cout << "1 ";
    else
        cout << "0 ";
    
    if(b % 2 == a % 2)
        cout << "1 ";
    else
        cout << "0 ";
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