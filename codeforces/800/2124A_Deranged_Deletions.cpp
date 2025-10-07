#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, flag = 0;
        cin >> n;
        vector<int> a(n);
        cin >> a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (a[i] < a[i - 1]) {
                if(flag) continue;
                cout << "YES\n" << 2 << endl << a[i - 1] << " " << a[i] << endl;
                flag = 1;
            }
        }
        if(!flag) cout << "NO\n";
    }
    return 0;
}
