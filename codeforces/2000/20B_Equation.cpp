#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    float delta = b * b - (4 * a * c);
    if (a == 0 && b == 0) {
        if (c == 0) cout << -1;
        else cout << 0;
    }
    else if (delta < 0) 
        cout << 0;
    else if (a == 0) {
        float ans = (-c) / b;
        cout << 1 << endl << fixed << setprecision(10) << ans;
    }
    else if (delta == 0) {
        float ans = -b / (2 * a);
        cout << 1 << endl << fixed << setprecision(10) << ans;
    }
    else {
        float ans1 = (-b - sqrt(delta)) / (2 * a);
        float ans2 = (-b + sqrt(delta)) / (2 * a);
        cout << 2 << endl << fixed << setprecision(10) << min(ans1, ans2) << endl << max(ans1, ans2);
    }
    return 0;
}