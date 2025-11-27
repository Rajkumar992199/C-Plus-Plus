#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<long long> a(n), b(n);
    long long gcd = 0, k = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i) 
            b[i - 1] = abs(a[i] - a[i - 1]);
    }

    b[n - 1] = abs(a[n - 1] - a[0]); 
    for(auto it : b) 
        k = __gcd(k, it);
    
    cout << k * 2 << endl;
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
