#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, mn;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        long long diff = a[1] - a[0]; // checking decreasing or increasing
        bool bad = 0;
        for(int i = 2; i < n; i++) if(diff != a[i] - a[i - 1]) bad = 1;
        if(bad) {
            cout << "NO\n";
            continue;
        }
        if (diff < 0) a[0] += diff * n ; 
        else a[0] -= diff;
            
        if (a[0] >= 0 && a[0] % (n + 1) == 0) 
            cout << "YES\n";
        else cout << "NO\n";
    }
}