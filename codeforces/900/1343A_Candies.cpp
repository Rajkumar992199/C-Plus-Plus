#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for ( int i = 0; i < t; i++) {
        long long n , x = 3 , ans;
        cin >> n;
        while(n % x != 0) x = 2*x + 1;
        ans = n / x;
        cout << ans << endl;
    }
}