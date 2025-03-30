#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string s;
        cin >> s;
        int ans = 0, max = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                ans++;
                if (ans > max) max = ans;
            }
            else ans = 0;
        }
        cout << max + 2 << endl;
    }
}