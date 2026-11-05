#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    for (int i = 0; i < n; i++) 
        cin >> b[i];
        
    int x = 0, y = 0, neg = 0, pos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) 
            x += a[i];
        else if (a[i] < b[i]) 
            y += b[i];
        else {
            neg -= (a[i] < 0);
            pos += (a[i] > 0);
        }
    }

    if(x > y)
        swap(x, y);

    int temp1 = min(y-x, -neg);
    y -= temp1;
    neg += temp1;

    temp1 = min(y-x, pos);
    x += temp1;
    pos -= temp1;

    pos += neg;
    pos -= (pos%2 != 0);
    
    cout << x + (pos/2) << '\n';
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