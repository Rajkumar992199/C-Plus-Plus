#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k, x;
    cin >> t;
    while (t--) {
        cin >> n >> k >> x;
        if ( x != 1) {
            cout << "YES" << endl << n << endl;
            for (int i = 0; i < n ; i++) cout << 1 << " ";
        }
        else if (x == 1 && k == 1) cout << "NO";
        else {
            if (k == 2) {
                if (n % 2 == 0) {
                    cout << "YES" << endl << (n / 2) << endl;
                    for (int i = 0; i < (n / 2); i++) cout << 2 << " ";
                }
                else cout << "NO";
            }
            else {
                if (n % 2 == 0) {
                    cout << "YES" << endl << (n / 2) << endl;
                    for (int i = 0; i < (n / 2); i++) cout << 2 << " ";
                }
                else {
                    cout << "YES" << endl << (n / 2) << endl << "3 ";
                    for (int i = 0; i < (n / 2) - 1; i++) cout << 2 << " ";
                }
            }
        }
        cout << endl;
    }
}