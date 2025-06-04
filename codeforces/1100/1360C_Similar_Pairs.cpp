#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, c1 = 0, c2 = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] % 2 == 0 ? c2++ : c1++;
        }
        if (c1 % 2 == 0) cout << "YES\n";
        else {
            sort(a.begin(), a.end());
            for (int i = 1; i < n; i++) {
                if(a[i] - a[i - 1] == 1) {
                    c1 = -1;
                    break;
                }
            }
            if (c1 == -1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}