#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    map<long long, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        for(int j = 2; j <= a[i]; j++) {
            if(j * j > a[i]) 
                j = a[i];
            if(a[i] == 1)
                break;
            while(a[i] % j == 0) {
                mp[j]++;
                a[i] /= j;
            }
        }
    }
    for(auto it : mp) {
        if(it.second % n != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
