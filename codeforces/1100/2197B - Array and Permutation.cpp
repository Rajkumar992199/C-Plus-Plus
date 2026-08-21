#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> a(n+1), p(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        mp[p[i]] = i;
    }
    int val = 0, pos = 0, last = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
 
    bool f = 1;
    for (int i = 1; i <= n; i++) {
        if (i > 1 && a[i] == a[i - 1])
            continue;
 
        if (mp[a[i]] <= last) {
            f = 0;
            break;
        }
        last = mp[a[i]];
    }
    
    if(f)
        cout << "YES\n";
    else
        cout << "NO\n";
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