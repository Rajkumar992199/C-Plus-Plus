#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, ans = 0;
    cin >> n >> m;
    vector<vector<long long>> cards(m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            long long c;
            cin >> c;
            // storing values column wise
            cards[j].push_back(c);
        }
    }
    if(n == 1) {
        cout << 0 << endl;
        return;
    }
    for(int j = 0; j < m; j++) {
        sort(cards[j].begin(), cards[j].end());
        long long prefix_sum = 0;
        for(int i = 1; i <= n; i++) {
            // prefix sum
            prefix_sum += cards[j][i - 1];
            ans += i * cards[j][i - 1] - prefix_sum;
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
}
