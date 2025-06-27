#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    long long n = s1.size(), m = s2.size(), ans = n + m, mn = min(n , m);
    for (int i = 0; i < mn; i++) {
        if (s1[n - i - 1] == s2[m - i - 1]) ans -= 2;
        else break;
    }
    cout << ans << endl;
    return 0;
}