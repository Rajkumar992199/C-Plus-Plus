#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    n = pow(2, n);
    m = m % n;
    cout << m << endl;
    return 0;
}
