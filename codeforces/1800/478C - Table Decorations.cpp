#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long r, g, b;
    cin >> r >> g >> b;

    long long sum = r + g + b;
    long long mx = max({r, g, b});
    cout << min(sum / 3, sum - mx) << endl;
    
    return 0;
}