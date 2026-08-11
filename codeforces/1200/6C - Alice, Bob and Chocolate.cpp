#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 1, r = n - 1;
    long long left = a[0], right = 0;

    while (l <= r) {
        if (left > right) {
            right += a[r];
            r--;
        } else {
            left += a[l];
            l++;
        }
    }

    cout << l << " " << n - 1 - r;

    return 0;
}
