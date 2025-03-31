#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y, k, n;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> x >> y >> k;
        n = min(x , y);
        cout << "0 0 " << n << " " << n << endl;
        cout << "0 " << n << " " << n << " 0" << endl;
    }
}