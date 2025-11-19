#include <bits/stdc++.h>
using namespace std;

void solve() {
    // number of squares, size pf cardboard
    long long n, c; 
    cin >> n >> c;
    
    // squares sizes
    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    // binary search
    long long l = 1, r = 1000000000;
    while(l <= r) {
        long long mid = l + (r - l) / 2;
        long long sum = 0;
        for(int i = 0; i < n; ++i) {
            sum += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if(sum > c) break;
        }
        if(sum == c) {
            cout << mid << endl;
            return;
        }
        if(sum > c) 
            r = mid - 1;
        else 
            l = mid + 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}