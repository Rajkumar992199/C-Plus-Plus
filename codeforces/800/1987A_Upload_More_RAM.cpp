#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k, ans;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        ans = (n - 1) * k + 1;
        cout << ans << endl;
    }
}