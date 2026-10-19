#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, ans = 0, mn = 1000;
    cin >> n >> k;

    vector<int> need(n), have(n);

    for(int i = 0; i < n; i++) 
        cin >> need[i];
    
    for(int i = 0; i < n; i++) {
        cin >> have[i];
        mn = min(mn, have[i]/need[i]);
    }
    ans += mn;

    for(int i = 0; i < n; i++) 
        have[i] -= mn*need[i];
    
    while(k > 0) {
        for(int i = 0; i < n; i++) {
            if(need[i] - have[i] > k) {
                cout << ans << '\n';
                return 0;
            }
            else if(have[i] < need[i]) 
                k -= need[i] - have[i];
        
            have[i] -= min(need[i], have[i]);
        }
        if(k >= 0)
            ans++;
    }
    
    cout << ans << '\n';

    return 0;
}