#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, a, b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        if(a == b) cout << 0 << endl;
        else if ( ((a - b) % 2 == 0 && (a - b < 0)) || ((a - b > 0) && ((a - b) % 2 == 1))) cout << 2 << endl;
        else cout << 1 << endl;
    }
}