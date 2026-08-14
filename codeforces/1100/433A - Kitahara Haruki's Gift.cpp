#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, hund = 0, two = 0, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if(x == 100)
            hund++;
        else
            two++;
    }

    if(hund % 2 || (!hund && two % 2))
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}
