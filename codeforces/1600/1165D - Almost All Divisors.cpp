#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> d(n);

    for (int i = 0; i < n; i++)
        cin >> d[i];

    sort(d.begin(), d.end());

    long long x = d[0] * d[n - 1];
    vector<long long> divisors;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            divisors.push_back(i);

            if (i != x / i)
                divisors.push_back(x / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    if (divisors == d)
        cout << x << '\n';
    else
        cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}