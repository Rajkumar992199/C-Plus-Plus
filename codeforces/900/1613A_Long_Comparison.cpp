#include "bits/stdc++.h"
using namespace std;

int t, x1, p1, x2, p2;
int main(){
    cin >> t;
    while(t--){
        cin >> x1 >> p1 >> x2 >> p2;
        double y = log10(1.0 * x1 / x2) + p1 - p2;
        cout << (y == 0 ? "=":( y > 0 ? ">" : "<")) << endl;
    }
    return 0;
}