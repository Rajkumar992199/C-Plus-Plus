#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        if(a[0] == a[n - 1]) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                if (i == ((n / 2) + ( n % 2) - 1)) cout << "B";
                else cout << "R";
            }
            cout << endl;
        }
    }
}