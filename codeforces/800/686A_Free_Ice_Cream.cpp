#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    long long x, d;
    char c;
    cin >> n >> x;
    long long sum = x;
    while (n--) {
        cin >> c >> d;
        if (c == '+') sum += d;
        else {
            if (d > sum) ans++;
            else sum -= d;
        }
    }
    cout << sum << " " << ans;
    return 0;
}