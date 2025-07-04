#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = pow(2, n / 2);;
    if (n % 2 == 1) cout << 0;
    else cout << ans;
    return 0;
}