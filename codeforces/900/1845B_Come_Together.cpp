#include <bits/stdc++.h>
using namespace std;

void solve() {
    int xA, yA, xB, yB, xC, yC;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;
    int ans = 1;
    if (xA < xB && xA < xC) 
        ans += min(xB, xC) - xA;
    if (xA > xB && xA > xC) 
        ans += xA - max(xB, xC);
    if (yA < yB && yA < yC) 
        ans += min(yB, yC) - yA;
    if (yA > yB && yA > yC) 
        ans += yA - max(yB, yC);
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}
