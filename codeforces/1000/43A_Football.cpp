#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, c1 = 0, c2 = 0;
    cin >> n;
    string s, s1, s2;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (i == 0) s1 = s;
        if (s == s1) c1++;
        else {
            s2 = s;
            if (s == s2) c2++;
        }
    }
    if (c1 > c2) cout << s1;
    else cout << s2;
    return 0;
}
