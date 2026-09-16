#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int c2 = 0, c3 = 0, sum = 0;
    for(char c : s) {
        int digit = c - '0';
        sum += digit;
        if(digit == 2)
            c2++;
        else if(digit == 3)
            c3++;
    }

    for (int x = 0; x <= min(c2, 8); x++) {
        for (int y = 0; y <= min(c3, 2); y++) {
            if ((sum + 2 * x + 6 * y) % 9 == 0) {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--) 
        solve();

    return 0;
}