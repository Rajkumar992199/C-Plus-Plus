#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        long long x, sum1, sum2 = 0;
        cin >> n >> k >> x;
        sum1 = (pow(k , 2) + k) / 2;
        sum2 = ((pow(n , 2) + n) / 2 ) - ((pow(n - k , 2) + n - k) / 2);
        if (x < sum1 || x > sum2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}