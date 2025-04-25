#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long count = b + 3, op = 0 , ans = INT_MAX, c = 0;
        if (b == 1) {
            b++;
            op++;
            c++;
        }
        for (long long i = b; i < count; i++) {
            long long temp = a;
            while (temp > 0) {
                temp /= i;
                op++;
            }
            if(i == b + 1) count = op;
            ans = min(ans, op);
            c++;
            op = c;
        }
        cout << ans << endl;
    }
    return 0;
}