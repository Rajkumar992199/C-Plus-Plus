#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c0 = 0;
    string s;
    cin >> n >> s;
 
    for (int i = 0; i < n; i++) 
        if (s[i] == '0')
            c0++;

    int c1 = n - c0;
    if(c0 % 2) {
        cout << c0 << endl;
        for (int i = 0; i < n; i++)
            if (s[i] == '0')
                cout << i + 1 << " ";
        cout << endl;
    }
    else if((c1 % 2) == 0) {
        cout << c1 << endl;
        if (c1 != 0) {
            for (int i = 0; i < n; i++)
                if (s[i] == '1')
                    cout << i + 1 << " ";
            cout << endl;
        }
    }
    else
        cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) 
        solve();

    return 0;
}