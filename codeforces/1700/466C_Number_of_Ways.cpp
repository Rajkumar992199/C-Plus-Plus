#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    if (total % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    long long part = total / 3, prefix_sum = 0, count_part = 0, ways = 0;
    for (int i = 0; i < n - 1; i++) { // last part must be non-empty
        prefix_sum += a[i];
        if (prefix_sum == 2 * part) ways += count_part;
        if (prefix_sum == part) count_part++;
    }
    cout << ways << endl;
    return 0;
}
