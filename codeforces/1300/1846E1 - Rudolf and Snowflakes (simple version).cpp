#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for(int k = 2; k < 1000; k++) {
        // f(i) = k*f(i-1)+1
        long long num = k+1;
        // f(1) = 1, f(2) = k+1

        for(int i = 3; i < 20; i++) {
            num = k*num+1;
            if(num == n) {
                cout << "YES\n";
                return;
            }
            else if(num > n)
                break;
        }
    }

    cout << "NO\n";
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