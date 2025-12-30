#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans = 0;
    cin >> n;
    vector<long long> a(n);
    map<long long, int> cnt;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    
    for(auto it : cnt) 
        ans += max(0, cnt[it.first] - cnt[it.first - 1]);

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
