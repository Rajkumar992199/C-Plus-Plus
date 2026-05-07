#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> ans(n), freq(n + 1, 0);

    ans[0] = 0;
    long long mn = 0;

    for(int i = 1; i < n; i++) {
        long long x;
        cin >> x;

        ans[i] = ans[i - 1] + x;
        mn = min(mn, ans[i]);
    }

    for(int i = 0; i < n; i++) {
        ans[i] -= mn - 1;

        if(ans[i] > n || freq[ans[i]]) {
            cout << -1;
            return 0;
        }

        freq[ans[i]] = 1;
    }

    for(auto it : ans)
        cout << it << " ";
}