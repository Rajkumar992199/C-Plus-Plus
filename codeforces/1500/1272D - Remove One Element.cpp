#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }

    vector<int> l(n, 1), r(n, 1);
    for (int i = 1; i < n; i++) 
        if (a[i] > a[i - 1]) 
            l[i] = l[i - 1] + 1;

    for (int i = n - 2; i >= 0; i--) 
        if (a[i] < a[i + 1]) 
            r[i] = r[i + 1] + 1;

    int ans = 0;
    for (int i = 0; i < n; i++) 
        ans = max(ans, l[i]);

    for (int i = 1; i < n - 1; i++) 
        if (a[i - 1] < a[i + 1]) 
            ans = max(ans, l[i - 1] + r[i + 1]);

    cout << ans << '\n';
    return 0;
}