#include <bits/stdc++.h>
using namespace std;

void solve() {
    int d;
    cin >> d;

    double delta = d*d - 4*d;
    if(d > 0 && d < 4) {
        cout << 'N' << '\n';
        return;
    }

    double a = (d + sqrt(delta))/2, b = (d - sqrt(delta))/2;

    cout << "Y " << fixed << setprecision(9) << a << " " << b << '\n'; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}