#include <iostream>
#include <vector>
using namespace std;

long long f(long long x, long long y) {
    return x & (~y);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<long long> ans(n, 0);

        for (int i = 1; i < n; i++) 
            ans[i] = f(ans[i - 1] ^ a[i - 1], a[i]);

        for (int i = 0; i < n; i++) 
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}