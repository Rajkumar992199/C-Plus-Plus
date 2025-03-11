#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, a[7];
    cin >> t;
    while (t--) {
        int ans = 0;
        for(int i = 0; i < 7; i++) a[i] = 0;
        cin >> n >> m;
        string s;
        cin >> s;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'A') a[0] += 1;
            else if(s[i] == 'B') a[1] += 1;
            else if(s[i] == 'C') a[2] += 1;
            else if(s[i] == 'D') a[3] += 1;
            else if(s[i] == 'E') a[4] += 1;
            else if(s[i] == 'F') a[5] += 1;
            else a[6] += 1;
        }
        for(int i = 0; i < 7; i++) if (a[i] < m) ans += (m - a[i]);
        cout << ans << endl;
    }
}