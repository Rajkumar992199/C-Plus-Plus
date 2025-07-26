#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 0, temp; 
        cin >> n;
        vector<long long> x(n), y(n);
        for (int i = 0; i < n; i++) cin >> x[i];
        for (int i = 0; i < n; i++) {
            cin >> y[i];
            y[i] -= x[i];
        }
        sort(y.begin(), y.end());
        temp = n;
        for (int i = 0; i < n; i++) {
            if (i < temp - 1 && y[i] + y[temp - 1] >= 0) {
                ans++;
                temp--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}