#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0, cnt = 0;
    cin >> n;
    vector<int> a(2 * n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i + n] = a[i];
    }
    for(int i = 0; i < n * 2; i++) {
        if(a[i] == 1) {
            cnt++;
            ans = max(ans, cnt);
        }
        else cnt = 0;
    }
    cout << ans;
    return 0;
}