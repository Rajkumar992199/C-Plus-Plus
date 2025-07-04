#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, i = 1, j = 0;
        cin >> n;
        if (n == 2) cout << -1 << endl;
        else if (n == 1) cout << 1 << endl;
        else {
            while (2 * i <= n * n) {
                cout << 2 * i << " ";
                if (i % n == 0) cout << endl;
                i++;
            }
            while (2 * j < n * n) {
                j++;
                cout << j * 2 - 1 << " ";
                if ((i + j - 1) % n == 0) cout << endl;
            }
        }
    }
    return 0;
}