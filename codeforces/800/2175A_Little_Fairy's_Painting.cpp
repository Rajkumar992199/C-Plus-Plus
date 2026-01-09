#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set<long long> s; 
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }
    long long ans = s.size();
    while(true) {
        if(s.find(ans) == s.end()) {
            s.insert(ans);
            ans = s.size();
        }
        else {
            ans = s.size();
            break;
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