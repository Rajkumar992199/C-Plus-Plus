#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c , s1, s2;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        s1 = (a - 1);
        if (b > c) s2 = b - 1;
        else s2 = ((2 * c) - b - 1);
        if (s1 < s2) cout << 1 << endl;
        else if ( s1 > s2) cout << 2 << endl;
        else cout << 3 << endl; 
    }
}