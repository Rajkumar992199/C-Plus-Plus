#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, count = 0;
        cin >> n >> k;
        long long temp = (n * n) - ((n * n) / 2) - 1; 
        vector<int> a(n * n);
        for (int i = 0; i < n * n; i++) {
            cin >> a[i];
            if (i > temp && a[i] != a[(n * n) - i - 1])
                count++;
        }
        if (n == 1 || (count <= k && ((k - count) % 2 == 0 || n % 2 == 1))) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}