#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int rem = n%4, cnt = n-rem;
    if(n < 4)
        cout << -1 << '\n';
    else {
        if(rem > 1)
            cnt--;
        for(int i = 1; i <= cnt; i++) {
            if(i % 4 == 1)
                cout << i+1 << " ";
            else if(i % 4 == 2)
                cout << i+2 << " ";
            else if(i % 4 == 3)
                cout << i-2 << " ";
            else
                cout << i-1 << " ";
        }

        if(rem == 1)
            cout << n;
        else if(rem == 2)
            cout << n-1 << " " << n-3 << " " << n;
        else if(rem == 3)
            cout << n-2 << " " << n << " " << n-4 << " " << n-1;
        cout << '\n';
    }
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