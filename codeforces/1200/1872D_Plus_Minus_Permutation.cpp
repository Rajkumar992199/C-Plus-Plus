#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, x, y, temp, ans = 0;
        cin >> n >> x >> y;
        temp = (x * y) / __gcd(x, y); // common in both permutation
        x = (n / x) - (n / temp); // remaining permutations which are not common in first
        y = (n / y) - (n / temp); // remaining permutations which are not common in second
        ans += n * (n + 1) / 2; 
        ans -= (n - x) * (n - x + 1) / 2; // positive sum (after upper and this calculation)
        ans -= y * (y + 1) / 2; // negative sum
        cout << ans << endl;
    }
    return 0;
}