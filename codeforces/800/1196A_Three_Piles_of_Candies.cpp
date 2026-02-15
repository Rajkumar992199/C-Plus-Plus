#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << (a + b + c) / 2 << endl;
    }

    return 0;
}