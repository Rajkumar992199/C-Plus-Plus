#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n), ans, diff(n);
    long long maxi = INT_MIN;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++){
        cin >> b[i];
        diff[i] = a[i] - b[i];
        maxi = max(diff[i] , maxi);
    }

    for(int i = 0; i < n ; ++i)
        if(diff[i] == maxi)
            ans.push_back(i + 1);

    cout << ans.size() << endl;
    for(int num : ans)
        cout << num << " ";
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