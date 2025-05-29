#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        if (p == n) {
            cout << (m == q ? "YES\n" : "NO\n");
        } 
        else if (p == 1) {
            cout << (m == q * n ? "YES\n" : "NO\n");
        }
        else if (n % p == 0) {
            cout << ((n / p) * q == m ? "YES\n" : "NO\n");
        }
        else cout << "YES\n";
    }
    return 0;
}