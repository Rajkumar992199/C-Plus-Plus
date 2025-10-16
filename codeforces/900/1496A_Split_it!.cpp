#include <bits/stdc++.h>
using namespace std;

bool isKPalindrome(string s, int k) {
    int n = s.size();
    for (int i = 0; i < k; i++) 
        if (s[i] != s[n - i - 1])
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k == 0) 
            cout << "YES\n";
        else if (n < 2 * k + 1) 
            cout << "NO\n";
        else if (isKPalindrome(s, k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
