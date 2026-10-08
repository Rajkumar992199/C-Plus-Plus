#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, x0, y0, x1, y1;
    cin >> r >> x0 >> y0 >> x1 >> y1;

    long long d = ceil(sqrt(1ll*(x1-x0)*(x1-x0)+1ll*(y1-y0)*(y1-y0)));
    r *= 2;
    cout << (d+r-1)/r << endl;

    return 0;
}