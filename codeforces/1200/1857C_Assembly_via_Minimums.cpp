#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n;
        m = n * (n - 1) / 2;
        vector<long long> a(m);
        for (long long i = 0; i < m; i++) 
            cin >> a[i];
        sort(a.begin(), a.end());
        for(long long i = 0; i < m; i += --n)
            cout << a[i] << " ";
        cout << 1000000000 << endl;
    }
    return 0;
}