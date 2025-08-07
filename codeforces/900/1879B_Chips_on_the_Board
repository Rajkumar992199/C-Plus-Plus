#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (auto& x : a) 
        cin >> x;
    for (auto& x : b) 
        cin >> x;
    long long mnA = *min_element(a.begin(), a.end());
    long long sA = accumulate(a.begin(), a.end(), 0LL);
    long long mnB = *min_element(b.begin(), b.end());
    long long sB = accumulate(b.begin(), b.end(), 0LL);
    long long ans = min(mnA * n + sB, mnB * n + sA);
    cout << ans << '\n';

}

signed main() 
{
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}
