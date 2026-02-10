#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long a[n], sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i) sum += abs(a[i] - a[i-1]);
    }   
    
    long long ans = min(sum - abs(a[1] - a[0]), sum - abs(a[n - 1] - a[n-2]));
    for(int i = 1; i < n - 1; i++)    
        ans = min(ans, sum - abs(a[i + 1] - a[i]) - abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i - 1]));
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}