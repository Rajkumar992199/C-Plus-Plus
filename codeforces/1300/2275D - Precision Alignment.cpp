#include <bits/stdc++.h>
using namespace std;

bool check(long long mid,
            const vector<long long>& a,
            const vector<long long>& b,
            const vector<long long>& c,
            long long k) {

    long long cnt = 0;
    int n = a.size();

    for (int i = 0; i < n; i++) {
        long long sum = a[i]+b[i]+c[i];

        if (sum < mid) {
            if (a[i] == b[i] && b[i] == c[i])
                return false;

            long long cost = mid - sum;
            if (a[i] <= b[i] && b[i] <= c[i]) 
                cost += 2*min(b[i]-a[i]+1, c[i]-b[i]+1);

            cnt += cost;

            if (cnt > k)
                return false;
        }
    }

    return true;
}

void solve() {
    long long n, k;

    cin >> n >> k;

    vector<long long> a(n), b(n), c(n);

    long long l = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];

        l = min(l, a[i] + b[i] + c[i]);
    }

    long long h = l+k+1;

    while (l + 1 < h) {
        long long mid = (h+l)/2;

        if (check(mid, a, b, c, k))
            l = mid;
        else
            h = mid;
    }

    cout << l << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}