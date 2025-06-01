#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    while (m > n) {
        if (m % 2 == 0) m /= 2;
        else m += 1;
        ans++;
    }
    ans += (n - m);
    cout << ans << endl;
    return 0;
}
