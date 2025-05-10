#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b, c, mx, rem = 0, sum = 0;
        cin >> a >> b >> c >> n; 
        sum += (a + b + c);
        mx = max(a, max(b , c)); 
        rem += (3 * mx) - (sum); // minimum coins required to all have same number of coins
        if ((n - rem) % 3 == 0 && n >= rem) cout << "YES" << endl; // if remaining coins are multiplier of 3 then answer is yes
        else cout << "NO" << endl;
    }
}