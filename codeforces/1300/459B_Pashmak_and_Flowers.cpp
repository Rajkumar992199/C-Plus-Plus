#include<bits/stdc++.h>
using namespace std;
long long ans(long long n) {
    long long result = 1;
    for (long long i = 2; i <= n; ++i) result += i;
    return result;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> b(n);
    long long x = 1, y = 1, p = 1, q = n - 2;
    for (long long i = 0; i < n; i++) cin >> b[i];
    sort(b.begin(), b.end());
    if (b[0] == b[n - 1]) {
        cout << b[n - 1] - b[0] << " " << ans(n - 1);
    }
    else {
        while (b[p] == b[0]) x++, p++;
        while (b[q] == b[n - 1]) y++, q--;
        cout << b[n - 1] - b[0] << " " << x * y;
    }
    return 0;
}
