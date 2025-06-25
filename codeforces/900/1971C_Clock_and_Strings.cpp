#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c , d;
        cin >> a >> b >> c >> d;
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);
        if ((c > a && c < b) || (d > a && d < b)) {
            if (!(c > a && c < b) || !(d > a && d < b))
                cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
    return 0;
}