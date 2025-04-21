#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans;
    cin >> n;
    string s;
    cin >> s;
    bool lex = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            lex = 1;
            ans = i + 1;
            break;
        }
    }
    if (lex) cout << "YES" << endl << ans << " " << ans + 1 << endl;
        else cout << "NO" << endl;
    return 0;
}