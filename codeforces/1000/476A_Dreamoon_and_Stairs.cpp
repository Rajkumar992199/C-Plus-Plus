#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n < m) cout << "-1";
    else {
        if (n <= 2 * m) cout << m;
        else if (n % (2 * m) == 0) cout << (n / 2) + (n % 2);
        else cout << (n / 2) + m - ((n / 2) % m);
    }
    return 0;
}
