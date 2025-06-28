#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) {
        int mn1 = i - 1, mn2 = i + 1, mx1 = 0, mx2 = n - 1;
        if (i == 0) mx1++, mn1 += 2;;
        if (i == n - 1) mx2--, mn2 -= 2;;
        cout << min(abs(x[i] - x[mn1]), abs(x[mn2] - x[i])) << " ";
        cout << max(abs(x[i] - x[mx1]), abs(x[mx2] - x[i])) << endl;
    }
    return 0;
}