#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        k = ((n * m) / 2) + ((n * m) % 2);
        cout << k << endl;
    }
}