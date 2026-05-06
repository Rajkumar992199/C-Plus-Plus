#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    char c = '2';

    if(b >= 0) 
        cout << n * (a + b) << endl;
    else {
        int one = 0, zero = 0;
        for(auto it : s) { 
            if(it != c) {
                if(it == '0')
                    zero++;
                else
                    one++;
                c = it;
            }
        }
        int mn = min(one, zero) + 1;
        cout << n * a + mn * b << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}