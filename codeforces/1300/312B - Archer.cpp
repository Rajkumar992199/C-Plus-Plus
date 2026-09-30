#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    double p = 1.0*a / b;
    double q = (1.0 - p) * (1.0- (1.0*c) / d);
    
    cout << fixed << setprecision(10) << p/(1-q);

    return 0;
}