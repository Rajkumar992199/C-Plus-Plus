#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n], c1 = 0, c2 = 0, k = 0;
        for (int i = 0; i < n ; i++) {
            cin >> a[i];
            if(a[i] == 2) c1++;
        }
        if(c1 % 2 != 0) cout << -1 << endl;
        else {
            for(int i = 0; i < n; i++) {
                if(a[i] == 2) c2++;
                if(c2 == (c1/2)) {
                    k = i + 1;
                    break;
                }
            }
            cout << k << endl;
        }
    }
}