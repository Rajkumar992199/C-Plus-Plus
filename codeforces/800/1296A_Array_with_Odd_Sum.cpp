#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n], flag = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] % 2 == 0) flag++;
            else flag--;
        }
        if (flag == n || (flag == (-n) && n % 2 == 0)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}