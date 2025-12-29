#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, ans = 0;
    string s;
    cin >> n >> s;
    vector<int> cost(n, INT_MAX);

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            for(int x = i; x < n; x += i + 1) {
                if(s[x] == '1') 
                    break;
                cost[x] = min(cost[x], i + 1);
            }
            ans += cost[i];
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();
}
