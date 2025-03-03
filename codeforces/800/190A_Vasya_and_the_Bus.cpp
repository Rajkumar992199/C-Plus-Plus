#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) cout << "0 0" << endl;
    else if (n == 0) cout << "Impossible" << endl;
    else if (m == 0) cout << n << " " << n << endl;
    else if ( n > m) cout << n << " " << (m + n -1) << endl;
    else cout << m << " " << (m + n -1) << endl;
}