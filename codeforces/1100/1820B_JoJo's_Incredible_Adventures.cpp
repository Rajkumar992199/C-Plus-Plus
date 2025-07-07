#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        long long n = s.size(), count1 = 0, mx = 0, c0 = 0;
        s += s;
        for (int i = 0; i < 2 * n; i++) {
            if(s[i] == '0') c0++;
            if (s[i] == '1' && s[i - 1] == '1') count1++;
            else if (i > 0) {
                mx = max(mx, count1);
                count1 = 0;
            }
        }
        if (c0) {
            mx = max(count1, mx);
            long long i = 1, ans = 0;
            while(mx) {
                ans = max(ans, ((mx + 1) * i));
                i++;
                mx--;
            }
            ans = max(ans, count1);
            if (c0 != 2 * n && ans == 0) ans = 1;
            cout << ans << endl;
        }
        else cout << n * n << endl;
    }
    return 0;
}