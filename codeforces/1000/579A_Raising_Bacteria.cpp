#include<bits/stdc++.h>
using namespace std;

int main() {
    long long x, ans = 0;
    cin >> x;
    while(x > 0) {
        if (x % 2 == 1) ans++;
        x /= 2;
    }
    cout << ans;
    return 0;
}
