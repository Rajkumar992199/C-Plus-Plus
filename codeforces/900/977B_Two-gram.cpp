#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, mx = 0, ans;
    cin >> n;
    string s, sol;
    cin >> s;
    for (int i = 0; i < n - 1; i++) {
        ans = 0;
        for (int j = 0; j < n - 1; j++) {
            if (s[i] == s[j] && s[i + 1] == s[j + 1])
                ans++;
        }
        if (mx < ans) {
            mx = ans;
            sol = string(1, s[i]) + string(1, s[i + 1]);
        }
    }
    cout << sol << endl;
    return 0;
}