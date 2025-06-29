#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 6;
    cin >> n;
    vector<int> a(7), sum(7);
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
        if (i > 0) sum[i] = sum[i - 1];
        sum[i] += a[i];
    }
    n = n % sum[6];
    if (n == 0) {
        while(a[ans] == 0) ans--;
        cout << ans + 1;
    }
    else {
        for (int i = 0; i < 7; i++) {
            if (n - a[i] <= 0) {
                cout << i + 1;
                return 0;
            }
            n -= a[i];
        }
    }
    return 0;
}