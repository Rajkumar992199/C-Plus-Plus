#include <bits/stdc++.h>
using namespace std;

int mx = 10000001;
vector<bool> isPrime(mx, 1);

void solve() {
    int n, ans = 0;
    cin >> n;
    
    for (int i = 2; i <= n; i++) 
        if(isPrime[i]) 
            ans += n / i;
    
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 2; i * i <= mx; i++) {
	    if (!isPrime[i]) 
            continue;
	    for(int j = i * i; j < mx; j += i) 
            isPrime[j] = 0;
    }

    int t;
    cin >> t;

    while (t--) 
        solve();

    return 0;
}