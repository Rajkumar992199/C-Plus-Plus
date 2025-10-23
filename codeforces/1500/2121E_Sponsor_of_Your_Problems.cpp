#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string l, r;
        cin >> l >> r;
        long long ans = 0, i = 0;
        if (l == r) cout << 2 * l.size() << endl;
        else {
            while (l[i] == r[i]) i++;
            if(abs(l[i] - r[i]) > 1) cout << 2 * i << endl;
            else {
                ans = 2 * i + 1;
                for (int j = i + 1; j < l.size(); j++) {
                    if(l[j] == '9' && r[j] == '0') ans++;
                    else break;
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}