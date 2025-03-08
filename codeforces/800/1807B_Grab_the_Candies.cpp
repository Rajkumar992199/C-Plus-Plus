#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n], sum = 0, even = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if(a[i] % 2 == 0) even += a[i];
        }
        sum -= even;
        if(even > sum) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}