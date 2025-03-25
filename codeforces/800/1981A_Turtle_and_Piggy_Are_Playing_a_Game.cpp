#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, ans;
        cin >> l >> r;
        ans = trunc(log2(r));
        cout << ans << endl;
    }
}