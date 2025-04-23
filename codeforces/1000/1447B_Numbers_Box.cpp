#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n * m], size = n * m, mn = 100, sum = 0, neg = 0;
        for (int i = 0; i < size; i++) {
            cin >> a[i];
            mn = min(mn , abs(a[i]));
            sum += abs(a[i]);
            if (a[i] < 0) neg++;
        }
        if (neg % 2 > 0) sum -= (2 * mn);
        cout << sum << endl;
    }
    return 0;
}