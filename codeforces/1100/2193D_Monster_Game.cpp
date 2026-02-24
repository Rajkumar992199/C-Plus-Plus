#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, ans = 0, totalCount = 0, index = 0;
    cin >> n;

    vector<long long> a(n), b(n);
    map<long long, long long> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        pref[i + 1] = pref[i] + b[i];
    }

    for (auto it = freq.rbegin(); it != freq.rend(); ++it) {
        long long value = it->first;
        long long count = it->second;

        totalCount += count;

        while (index <= n && pref[index] <= totalCount) 
            index++;

        if (index > 0) 
            ans = max(ans, 1LL * (index - 1) * value);
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}