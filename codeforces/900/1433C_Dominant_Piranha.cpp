#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long mx = 0, loc = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        for (int i = 0; i < n; i++) {
            if(a[i] == mx && i > 0 && a[i - 1] != mx) loc = i + 1;
            else if(a[i] == mx && i < n - 1 && a[i + 1] != mx) loc = i + 1;
        }
        cout << loc << endl;
    }
    return 0;
}