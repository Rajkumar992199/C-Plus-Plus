#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count0 = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++) 
            count0 += (s[i] == '0');
        if (count0 == 1) cout << "BOB\n";
        else if (count0 % 2) cout << "ALICE\n";
        else cout << "BOB\n";
    }
    return 0;
}
