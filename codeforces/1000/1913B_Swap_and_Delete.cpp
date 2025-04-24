#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int c0 = 0, c1 = 0, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') c0++;
            else c1++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0' && c1 > 0) c1--;
            else if (s[i] == '1' && c0 > 0) c0--;
            else break;
            ans++;
        }
        cout << s.size() - ans << endl;
    }
    return 0;
}