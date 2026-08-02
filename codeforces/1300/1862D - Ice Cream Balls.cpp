#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    n *= 2;
    long long root = sqrt(n), ans = 0;
    if(root*(root+1) > n) {
        ans = root;
        ans += (n - root*(root-1))/2;
    }
    else {
        ans = root+1;
        ans += (n - root*(root+1))/2;
    }
    
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}