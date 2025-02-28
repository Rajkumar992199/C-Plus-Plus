#include<bits/stdc++.h>
using namespace std;

int main() {
    int t , n , k;
    cin >> t;
    for ( int i = 0; i < t; i++) {
        cin >> n >> k;
        int a[n] , ans = 0 , coin = 0;
        for(int i = 0; i < n ; i++) {
            cin >> a[i];
            if(a[i] >= k) coin += a[i];
            if(a[i] == 0 && coin != 0) {
                coin--;
                ans++;
            }
        }
        cout << ans << endl;
    }
}