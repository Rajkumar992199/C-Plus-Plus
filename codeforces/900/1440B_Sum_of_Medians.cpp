#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int size = (n * k);
        long long a[size], sum = 0;
        for (int i = 0; i < size; i++) cin >> a[i];
        int m = (size - 1) - (n / 2);
        for (int i = 0; i < k; i++) {
            sum += a[m];
            m -= (n / 2) + 1;
        }
        cout << sum << endl;
    }
}