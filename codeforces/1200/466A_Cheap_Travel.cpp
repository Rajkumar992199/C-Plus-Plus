#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (b / m < a) cout << (n / m) * b + min(b, (n % m) * a);
    else cout << n * a;
    return 0;
}
