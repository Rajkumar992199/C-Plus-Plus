#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x;
        cin >> x;
        while(x >= 0) {
            if (x % 11 == 0) {
                cout << "YES\n";
                break;
            }
            x -= 111;
        } 
        if (x < 0) cout << "NO\n";
    }
    return 0;
}