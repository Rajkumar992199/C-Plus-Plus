#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, x1, x2, x3, sum, a, b, c;
    cin >> t;
    while(t--) {
        cin >> x1 >> x2 >> x3;
        a = abs(x1-x2);
        b = abs(x2-x3);
        c = abs(x1-x3);
        sum = a + b + c - max(max(a, b), c);
        cout << sum << endl;
    }
}