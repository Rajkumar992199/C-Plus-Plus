#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d, y;
        cin >> a >> b >> c >> d;
        y = (b + c) / 2;
        if (b + y <= c) y = c;
        cout << b << " " << y << " " << c << endl; 
    }
}