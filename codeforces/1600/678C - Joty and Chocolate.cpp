#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long red = n / a;
    long long blue = n / b;
    long long decide = n / lcm(a, b);

    long long ans = p * red + q * blue - min(p, q) * decide;
    cout << ans;

    return 0;
}