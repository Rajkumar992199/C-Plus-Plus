#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, l, r;
    cin >> t;
    while(t--) {
        cin >> l >> r;
        if(r >= 2*l) cout << l << " " << 2*l << endl;
        else cout << "-1 -1" << endl;
    }
}