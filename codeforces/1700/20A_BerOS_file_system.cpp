#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 1; i <= s.size(); i++) {
        if (s[i - 1] == '/' && s[i] == '/') {
            s.erase(i - 1, 1);
            i--;
        }
    }
    if (s.size() != 1 && s[s.size() - 1] == '/') s.erase(s.size() - 1, 1);
    cout << s;
    return 0;
}