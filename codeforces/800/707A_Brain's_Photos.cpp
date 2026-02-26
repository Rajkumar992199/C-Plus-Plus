#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    char c;
    for(int i = 0; i < m * n; i++) {
        cin >> c;
        if(c == 'C' || c == 'Y' || c == 'M') {
            cout << "#Color";
            return 0;
        }
    }
    cout << "#Black&White";
    return 0;
}