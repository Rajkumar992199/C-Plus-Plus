#include<bits/stdc++.h>
using namespace std;

int main() {
    int t , x , k;
    cin >> t;
    while(t--){
        cin >> x >> k;
        int a = x;
        if( k > x || x % k != 0) cout << 1 << endl << x << endl;
        else {
            while(a % k == 0 || (x-a % k == 0)) a--;
            cout << 2 << endl << a << " " << x-a << endl;
        }
    }
}