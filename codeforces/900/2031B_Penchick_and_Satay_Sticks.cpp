#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int p[n], flag = 0;
        for (int i = 0; i < n; i++) cin >> p[i];
        for (int i = 0; i < n; i++) {
            if (p[i] != i + 2 && p[i] != i + 1 && p[i] != i) {
                cout << "NO" << endl;
                flag++;
                break;
            }
        }
        if (flag == 0) cout << "YES" << endl; 
    }
}