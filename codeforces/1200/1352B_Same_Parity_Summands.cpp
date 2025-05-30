#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (((n % k != 0) && (n / k <= 1) && ((n - k) % 2 != 0)) || (n % 2 == 1 && k % 2 == 0) || n < k) cout << "NO\n";
        else {
            cout << "YES\n";
            if (n % k == 0) {
                for (int i = 0; i < k; i++) cout << n / k << " ";
            }
            else if (n % 2 == k % 2) {
                    for (int i = 0; i < k - 1; i++) cout << 1 << " ";
                    cout << n - k + 1;
            }
            else {
                for (int i = 0; i < k - 1; i++) cout << 2 << " ";
                cout << n - (k - 1) * 2;
            }
            cout << endl;
        }
    }
    return 0;
}
