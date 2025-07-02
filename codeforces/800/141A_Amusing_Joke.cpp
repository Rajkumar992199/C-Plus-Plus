#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, ans;
    cin >> s1 >> s2 >> ans;
    s1 += s2;
    sort(s1.begin(), s1.end());
    sort(ans.begin(), ans.end());
    if (s1 == ans) cout << "YES\n";
    else cout << "NO\n";
}