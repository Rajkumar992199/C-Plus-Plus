#include<bits/stdc++.h>
using namespace std;

int div2(int x) {
    int cnt2 = 0;
    while (x % 2 == 0) {
        x /= 2;
        cnt2++;
    }
    return cnt2;
}

void solve() {
	int n;
    cin >> n;
    long long cnt = n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cnt -= div2(a);
    }

    if (cnt <= 0) 
        cout << 0 << "\n";
    else {
        int ans = 0;
        for (int k = __lg(n); k >= 1 && cnt > 0; k--) {
            int c = (n >> k) - (n >> (k + 1)); 
            if (c == 0) 
                continue;

            int need = (cnt+k-1) / k; 
            int take = min(c, need);

            ans += take;
            cnt -= 1ll*take*k;
        }

        if(cnt > 0)
            cout << -1 << "\n";
        else 
            cout << ans << "\n";
    }
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