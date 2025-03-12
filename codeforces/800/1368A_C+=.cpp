#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, a, b, n;
    cin >> t;
    while (t--) {
        cin >> a >> b >> n;
        long long sum = a + b, ans = 0;
        if (n < sum) cout << 1 << endl;
        else {
            while ( n >= sum) {
                sum =  a + b;
                a = max (a , b);
                b = sum;
                ans++;
            }
            cout << ans << endl;
        }
    }
}