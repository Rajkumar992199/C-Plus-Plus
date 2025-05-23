#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k, ans;
        cin >> n >> k;
        ans = (n * k) / (n - 1);
        if (ans % n == 0) ans--;
        cout << ans << endl;
    }
    return 0;
}
