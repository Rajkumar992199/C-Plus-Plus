#include<bits/stdc++.h>
using namespace std;

void solve(long long n) {
    vector<long long> v1;
    long long c = 0, ans = 0, temp = n;
    for (int i = 2; i * i <= temp; i++) {
        if (temp % i == 0) {
            c++;
            v1.push_back(i);
            temp /= i;
        }
        if (c > 1) {
            if (n % (v1[0] * v1[1]) == 0) ans = n / (v1[0] * v1[1]);
            if (ans != v1[0] && ans != v1[1] && ans > 2 ) c++;
            break;
        }
    }
    if (c > 2) {
    cout << "YES\n";
    cout << v1[0] << " " << v1[1] << " " << n / (v1[0] * v1[1]) << endl;
    }
    else cout << "NO\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        vector<long long> v1;
        cin >> n;
        solve(n);
    }
    return 0;
}
