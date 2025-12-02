#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, l, r;
    cin >> n >> l >> r;
    vector<long long> a(n);

    for(int i = n; i > 0; i--) {
        // for different gcd x should be divisible by i
        long long x = r / i; 
        x *= i;
        if(x >= l) 
            a[i - 1] = x;
        else {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    for(int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
}
