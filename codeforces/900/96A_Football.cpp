#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = 1, mx = 0, ans = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) { 
            l++;
            mx = max(mx, l);
        }
        else l = 1;
        if (mx >= 7) {
            ans = 1;
            break;
        }
    }   
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}