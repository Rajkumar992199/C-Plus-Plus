#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, l = 1;
        cin >> n;
        while (2 * l - 1 <= n) {
            cout << 2 * l - 1 << " ";
            l++;
        }
        n++;
        while (n-- && n > 0) {
            if (n % 2 == 0) cout << n << " ";
        }
        cout << endl;
    }
}