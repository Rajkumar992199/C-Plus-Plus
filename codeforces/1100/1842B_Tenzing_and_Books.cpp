#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, knowledge = 0;
    cin >> n >> x;
    vector<long long> a(n);
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < n; j++)
            cin >> a[j];
        for(int j = 0; j < n; j++) {
            if((x | a[j]) != x) break;
            knowledge |= a[j];
        }
    }
    
    if(knowledge == x) 
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