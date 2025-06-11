#include<bits/stdc++.h>
using namespace std;

bool solve(long long mid, vector<long long> &a, long long x) {
    long long req = 0;
    int n = a.size();
    for (int i = 1; i <= n; i++) {
        if (a[i] < mid) {
            req += (mid - a[i]);
        }
        else break;
    }
    return req <= x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n + 1), b(n + 1, 0);
        for (int i = 1; i <= n; i++) 
            cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 1; i <= n; i++) {
            b[i] += a[i] + b[i - 1];
        }
        if(a[n] * n - b[n] <= x) {
            cout << (b[n] + x) / n << endl;
            continue;
        }
        long long start = a[1], end = a[n], ans = a[1];
        while (start <= end) {
            long long mid = (start + end) / 2;
            if (solve(mid, a, x)) {
                ans = mid;
                start = mid + 1;
            }
            else end = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}