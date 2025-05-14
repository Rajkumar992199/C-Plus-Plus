#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , x;
        bool flag = 0;
        cin >> n;
        vector<int> a(n + 1 , 0);
        for (int i = 1; i <= n; i++) {
            cin >> x;
            a[x]++;
        }
        for (int i = 1; i <= n; i++) {
            if (a[i] % 2 == 1) {
                flag = 1;
                break;
            }
        }
        (flag ? cout << "YES\n" : cout << "NO\n");
    }
    return 0;
}
