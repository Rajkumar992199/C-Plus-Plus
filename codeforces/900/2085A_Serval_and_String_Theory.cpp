#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, flag1 = 0;
        cin >> n >> k;
        string s, rev;
        cin >> s;
        rev = s;
        reverse(rev.begin(), rev.end());
        for (int i = 0; i < n - 1; i ++) if (s[i] != s[i + 1]) flag1 = 1; // checking for different element in s
        (!flag1 || ( k == 0 && s >= rev) ? cout << "NO\n" : cout << "YES\n");
        // if s have same elements or it is not universal and k = 0 then output is NO else YES
    }
    return 0;
}
