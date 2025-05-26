#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n + 1, -1);
    dp[0] = 0; // Base: 0 length means 0 pieces
    for (int i = 0; i <= n; i++) {
        if (dp[i] != -1) { // at i = 0, only a, b, c will be 1
            if (i + a <= n && dp[i] + 1 > dp[i + a])
                dp[i + a] = dp[i] + 1; // possible cutting while one of the piece have a size
            if (i + b <= n && dp[i] + 1 > dp[i + b])
                dp[i + b] = dp[i] + 1; // possible cutting while one of the piece have b size
            if (i + c <= n && dp[i] + 1 > dp[i + c])
                dp[i + c] = dp[i] + 1; // possible cutting while one of the piece have c size
        }
    }
    cout << dp[n] << endl;
    return 0;
}
