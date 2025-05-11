#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, k;
    cin >> t;
    while(t--) {
        cin >> n >> m >> k;;
        int a[n], b[m], ans = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        sort(a , a + n);
        sort(b , b + m);
        for(int i = 0; i < n; i++) {
            if (a[i] >= k) break;
            for(int j = 0; j < m; j++){
                if(b[j] <= k - a[i]) ans++;
                else break;
            }
        }
        cout << ans << endl;
    }
}