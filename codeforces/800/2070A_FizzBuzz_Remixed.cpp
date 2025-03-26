#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans = 1, k = 2;
        cin >> n;
        ans += (n / 15) * 3 + min((n % 15) , k);
        cout << ans << endl;
    }
}