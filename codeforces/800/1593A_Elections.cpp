#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, mx = INT_MIN, count = 0;
        cin >> a >> b >> c;
        mx = max(a, max(b, c));
        count += (a == mx) + (b == mx) + (c == mx);
        a = mx - a + 1;
        b = mx - b + 1;
        c = mx - c + 1;
        if(count == 1) {
            if(a == 1) a--;
            else if(b == 1) b--;
            else if(c == 1) c--;
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}