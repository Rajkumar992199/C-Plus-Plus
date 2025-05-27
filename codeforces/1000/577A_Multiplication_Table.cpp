#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, ans = 0, sq = round(sqrt(x));
    cin >> n >> x;
    if (n * n < x) {
        cout << 0;
        return 0;
    }
    for (int i = 1; i <= min(n, x); i++) {
        if (x % i == 0) if(((x / i) + (x % i)) <= n) ans++;
    }
    if (sq <= n && sq*sq == x) ans--;
    cout << ans;
    return 0;
}