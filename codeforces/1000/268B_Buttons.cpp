#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0 ; i < n; i++) 
        ans += (n - i - 1) * (i + 1) + 1;
    cout << ans; 
    return 0;
}