#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, ans = 0, sum = 0;
    cin >> k;
    vector<int> a(13);
    a[12] = 0;
    for (int i = 0; i < 12; i++) 
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    for (int i = 0; i <= 12; i++) {
        if (sum >= k) {
            cout << ans;
            break;
        }
        sum += a[i];
        ans++;
    }
    if (sum < k) cout << -1;
}