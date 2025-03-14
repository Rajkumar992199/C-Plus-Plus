#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        int sum1 = 0, sum = 0;
        cin >> n;
        if (n == 2) cout << 2 << endl;
        else {
            for(int i = 1;i <= n; i++) sum += pow(2, i);
            for(int i = 1;i < (n / 2); i++) sum1 += pow(2, i);
            sum1 += pow(2, n);
            cout << (2 * sum1) - sum << endl;
        }
    }
}