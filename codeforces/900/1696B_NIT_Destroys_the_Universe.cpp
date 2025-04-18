#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        bool zero = 0, nonzero = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > 0) nonzero = 1;
            if (nonzero && a[i] == 0) zero = 1;
            if(zero && a[i] > 0) ans = 1;
        }
        if (!nonzero) cout << 0 << endl;
        else if (ans) cout << 2 << endl;
        else cout << 1 << endl;
    }
}