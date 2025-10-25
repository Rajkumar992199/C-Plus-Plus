#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    
    if (x > y) 
        swap(x, y);
    // in last game there should be one player winning 0 games so x should be 0
    // if x = 0 & y = 0 that can't be possible
    // for winning y times (n - 1) should be divisible by y
    if (x != 0 || y == 0 || (n - 1) % y != 0) { 
        cout << -1 << endl;
        return;
    }
    // there always be x = 0 && y != 0
    // so first player will wins y times and y + 1 th player y times and so on..
    for (int i = 0; i < n - 1; i++) 
        cout << i - i % y + 2 << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}