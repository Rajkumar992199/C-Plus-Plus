#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        n -= k;
        while (k--) cout << 1;
        while (n--) cout << 0;
        cout << endl;
    }
    return 0;
}