#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int k, x;
        cin >> k;
        bool cancel = true;
        vector<bool> pos(n+1, false), neg(n+1, false);
        for(int j = 0; j < k; j++) {
            cin >> x;
            if(x > 0)
                pos[abs(x)] = true;
            else
                neg[abs(x)] = true;
            if(pos[abs(x)] && neg[abs(x)])
                cancel = false;
        }
        if(cancel) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}
