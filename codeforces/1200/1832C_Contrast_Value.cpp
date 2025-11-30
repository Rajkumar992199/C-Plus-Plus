#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<long long> a(n);
    long long ans = n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == a[i - 1]) { // same elements
            n--;
            i--;
            ans--;
        }
        else if(i > 1) { // after removing element no change in contrast
            if((a[i - 2] >= a[i - 1] && a[i - 1] >= a[i])
            || (a[i - 2] <= a[i - 1] && a[i - 1] <= a[i])) {
                ans--;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
