#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int k = abs(a[0] - 1);
        for (int i = 1; i < n; i++) k = __gcd(k, abs(a[i] - (i + 1)));
        cout << k << endl; 
    }
    return 0;
}