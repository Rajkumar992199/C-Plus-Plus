#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long long n, cnt = 0, sum = 0;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if(a[i])
            cnt++;
    }
    cout << min(cnt, sum - n + 1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
        solve();

    return 0;
}