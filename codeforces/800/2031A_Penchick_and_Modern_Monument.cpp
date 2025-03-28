#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int ans = 1, a[n], max = 1;
        for (int i = 0; i < n ; i++) cin >> a[i];
        for (int i = 1; i < n ; i++) {
            if(a[i] == a[i - 1]) ans++;
            else ans = 1;
            if(ans > max) max = ans;
        }
        cout << n - max << endl;
    }
}