#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long ans = n, temp = 0;
    ans += (n - 1) / (m - 1);
    cout << ans << endl;
    return 0;
}