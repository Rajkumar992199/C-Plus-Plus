#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    long long a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b >> n;
        long long x[n], sum = 0;
        for (int i = 0; i < n; i++){
            cin >> x[i];
            if (x[i] > a - 1) x[i] = a - 1;
            sum += x[i];
        }
        sum += b;
        cout << sum<< endl;
    }
}