#include <bits/stdc++.h>
using namespace std;

long long find() {
    long long n, k;
    cin >> n >> k;
    if (2 * k <= (n + (n % 2))) return ((2 * k) - 1);
    else return n - ((n - k) * 2) - (n % 2);
}

int main() {
    long long ans = find();
    cout << ans << endl;
    return 0;
}