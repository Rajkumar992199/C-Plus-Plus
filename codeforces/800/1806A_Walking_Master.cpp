#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t , a , b , c , d , c1 , c2;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        c1 = c - a;
        c2 = d - b;
        if(b <= d && (a >= c || (a < c && c2 >= abs(c1)))) cout << (2*c2)-c1 << endl;
        else cout << -1 << endl;
    }
}