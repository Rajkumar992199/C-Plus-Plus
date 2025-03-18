#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort (a, a + n);
        if (a[0] == a[n - 1]) cout << "NO" << endl;
        else {
            cout << "YES" << endl << a[n - 1] << " ";
            for (int i = 0; i < n - 1; i++) cout << a[i] << " ";
            cout << endl;
        }
    }
}