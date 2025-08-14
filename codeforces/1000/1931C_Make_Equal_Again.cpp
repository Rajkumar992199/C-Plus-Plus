#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
        long long n, l = 0, r = 0; 
        bool b = 1;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == a[0] && b) l++;
            else b = 0;
        }
        for (int i = n - 1; i >= 0; i--) {
            if(a[i] != a[n - 1]) break;
            r++;
        }
        if(a[0] != a[n - 1]) {
            cout << n - max(l, r) << endl;
            continue;
        }
        cout << max(n - l - r, 0ll) << endl;
    }
    return 0;
}
