#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, idx = -1;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;
    unordered_set<int> visited;
    for(int i = 0; i < n; i++) { 
        cin >> a[i];
        mp[a[i]] = i;
    }
    
    for(int i = n - 2; i >= 0; i--) {
        if(a[i] > a[i + 1]) {
            idx = i;
            break;
        }
    }
    
    if(idx == -1) {
        cout << "0\n";
        return;
    }
    for(int i = 0; i <= idx; i++) {
        if(mp[a[i]] > idx)
            idx = mp[a[i]];
        visited.insert(a[i]);
    }

    cout << visited.size() << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) 
        solve();
}