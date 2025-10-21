#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n; 
    vector<vector<int>> v(n, vector<int>(n, 0)); 

    for(int i = 0; i < n; i++) 
        v[i][i] = 1; 

    for(int i = n - 1; i >= 0; i--) 
        v[n - 1 - i][i] = 1;

    if(n % 2 != 0) {
        v[(n - 1) / 2][0] = 1;
        v[0][(n-1)/2]=1;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) 
            cout << v[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) 
        solve();
}
