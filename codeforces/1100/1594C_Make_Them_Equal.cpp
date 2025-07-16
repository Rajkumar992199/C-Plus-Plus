#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, count = 0;
        char c;
        string s;
        cin >> n >> c >> s;
        for (int i = 0; i < n; i++) 
            if(s[i] == c) count++;
        if (count == n) {
            cout << 0 << endl;
            return;
        }
        for (int i = 0; i < n; i++) {
            count = 1;
            for (int j = i; j < n; j += (i + 1)) {
                if (s[j] != c) {
                    count = 0;
                    break;
                }
            }
            if(count) {
                cout << 1 << endl << i + 1 << endl;
                return;
            }
        }
        cout << 2 << endl << n << " " << n - 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}