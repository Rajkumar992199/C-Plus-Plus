#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++) {
            if ((a[i] <= 0 && a[i - 1] < 0) || (a[i - 1] < 0 && abs(a[i - 1]) > abs(a[i]))) {
                a[i] = -a[i];
                a[i - 1] = -a[i - 1];
                i++;
            }
        }
        for (auto it : a) ans += it;
        cout << ans << endl;
    }
    return 0;
}