#include <bits/stdc++.h>
using namespace std;

void solve(){
    string n, k, ans;
    cin >> n >> k;
    int idx1 = 0, idx2 = 0, len1 = n.size(), len2 = k.size();
    for(int i = 0; i < len1 * len2; i++) {
        if(n[i % len1] == k[i % len2]) {
            ans += n[i % len1];
            if((i + 1) % len1 == 0 && (i + 1) % len2 == 0) {
                cout << ans << endl;
                return;
            }
            else continue;
        }
        else {
            cout << -1 << endl;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();
}
