#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, q, prev = INT_MAX;
        cin >> n >> q;
        vector<long long> a(n);
        vector<int> x(q);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        for (int i = 0; i < q; i++) {
            cin >> x[i];
            if (prev > x[i]) 
                prev = x[i];
            else 
                continue;
            for (int j = 0; j < n; j++) {
                long long num = pow(2, x[i]);
                if (a[j] % num == 0) 
                    a[j] += pow(2, x[i] - 1);
            }
        }
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
