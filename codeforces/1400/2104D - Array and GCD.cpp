#include <bits/stdc++.h>
using namespace std;

vector<int> p, ip(6e6, 1);
void isPrime() {
    for (int i = 2; i < 6e6; i++) {
        if (!ip[i]) 
            continue;
        p.push_back(i);
        for (int j = i; j < 6e6; j += i) 
            ip[j] = 0;
    }
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    int ans = 0;
    long long suma = 0, sump = 0;
    for (int i = 0; i < n; i++) {
        suma += a[i];
        sump += p[i];
        if (suma >= sump) 
            ans = i + 1;
    }
    cout << n - ans << endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    isPrime();

    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}