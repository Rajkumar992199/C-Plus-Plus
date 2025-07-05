#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    bool ans = (t + d) / t < n / k + (n % k != 0);
    if(ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}