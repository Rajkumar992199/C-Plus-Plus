#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, mod;
    cin >> a >> b;
    int ans = a;
    while (a / b) {
        ans += a / b;
        mod = a % b;
        a /= b;
        a += mod;
    }
    cout << ans;
    return 0;
}
