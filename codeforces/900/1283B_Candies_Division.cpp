#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        if(2 * (n % k) > k) cout << n - (n % k) + (k / 2) << endl;
        else cout << n << endl;
    }
    return 0;
}
