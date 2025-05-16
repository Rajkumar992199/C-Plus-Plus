#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // storing number of houses and number of tasks
    int a[m];
    long long ans = -1; // existing house doesn't count so starting with -1
    for (int i = 0; i < m; i++) {
        cin >> a[i]; //storing house to be visited
        if (i > 0 && a[i] < a[i - 1]) ans += n; // checking if new round needed, if yes then all house has to be visit
        if (i == m - 1) ans += a[m - 1]; // in last round just visit till last house
    }
    cout << ans;
    return 0;
}