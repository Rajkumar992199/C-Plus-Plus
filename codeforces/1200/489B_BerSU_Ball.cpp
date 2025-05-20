#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, ans = 0, x = 0, y = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while (x < n && y < m) {
        if(abs(a[x] - b[y]) <= 1) ans++, x++, y++;
        else if (a[x] > b[y]) y++;
        else if (b[y] > a[x]) x++;
    }
    cout << ans << endl;
    return 0;
}
