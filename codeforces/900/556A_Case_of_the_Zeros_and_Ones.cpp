#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c0 = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') c0++;
    }
    cout << n - 2 * min(c0, n - c0);
}