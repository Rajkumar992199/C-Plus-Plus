#include <bits/stdc++.h>
using namespace std;

signed main() 
{
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << min(a[0] * 2, a[0] + a[1]) << endl;
    }
    return 0;
}