#include<bits/stdc++.h>
using namespace std;

int main() {
    int t , w , h;
    cin >> t;
    for ( int i = 0; i < t; i++) {
        long long n , ans = 1;
        cin >> w >> h >> n;
        while(w % 2 == 0 || h % 2 == 0) {
            ans *= 2;
            if(w % 2 == 0) w /= 2;
            else if(h % 2 == 0) h /= 2;
            if(ans >= n) break;
        }
        if(ans >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}