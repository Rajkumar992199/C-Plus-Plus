#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == 1) {
            if(m) m--;
            else ans++;
        }
        else {
            if(k) k--;
            else if(m) m--;
            else ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
