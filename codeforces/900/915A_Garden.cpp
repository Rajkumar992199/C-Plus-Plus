#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int n, k, ans = INT_MAX;
    cin >> n >> k;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(k % a[i] == 0) 
            ans = min(ans, k / a[i]);
    }
    cout << ans << endl;
}
