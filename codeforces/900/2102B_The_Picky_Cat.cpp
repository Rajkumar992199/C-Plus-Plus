#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, loc;
        long long temp;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            a[i] = abs(a[i]); // Convert to absolute values
            temp = a[0];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) if (a[i] == temp) loc = i;
        if (n % 2 == 1) loc++;
        if (loc <= (n + 1) / 2 || n == 1 || (n == 2 && a[0] <= a[1])) cout << "YES" << endl; // If abs(a[0]) is NOT the max, we can make it median
        else cout << "NO" << endl;
    }
}