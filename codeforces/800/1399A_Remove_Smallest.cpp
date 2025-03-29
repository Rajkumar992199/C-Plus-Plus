#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n], flag = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort (a , a + n);
        for (int i = 1; i < n; i++) if (a[i] - a[i - 1] > 1) {
            cout << "NO" << endl;
            flag++;
            break;
        }
        if (flag == 0) cout << "YES" << endl;
    }
}