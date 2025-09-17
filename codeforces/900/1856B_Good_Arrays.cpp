#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        long long n, cnt1 = 0, sum = 0;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if(a[i] == 1) cnt1++; // number of 1's
        }
        if(sum >= cnt1 + n && n > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}