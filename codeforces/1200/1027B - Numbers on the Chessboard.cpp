#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, q;
    cin >> n >> q;

    long long x, y;

    for(int i = 0; i < q; i++) {
        cin >> x >> y;
        long long ans = 0;

        ans += (x - 1) * n + y;
        ans += ans % 2;
        ans /= 2;

        if(x % 2 != y % 2) 
            ans += (n * n) / 2 + (n % 2);

        cout << ans << endl;
    }
    
    return 0;
}