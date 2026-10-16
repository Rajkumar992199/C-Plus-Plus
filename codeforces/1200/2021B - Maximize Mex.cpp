#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, a;
    cin >> n >> x;
    vector<int> cnt(n+1, 0);

    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a <= n)
            cnt[a]++;
    }

    for(int i = 0; i <= n; i++) {
        if(cnt[i] == 0) {
            cout << i << endl;
            return;
        }
        if(i+x <= n) 
            cnt[i+x] += cnt[i]-1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) 
        solve();

    return 0;
}