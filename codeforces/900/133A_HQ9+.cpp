#include <bits/stdc++.h>
using namespace std;

bool check() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') return 1;
    return 0;
}

int main() {
    bool ans = check();
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}