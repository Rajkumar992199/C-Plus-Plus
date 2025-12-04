#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cin.tie(0);
    
    long long n, sum = 0;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    
    long long m;
    cin >> m;
    while(m--) {
        long long x;
        cin >> x;
        cout << sum - a[n - x] << endl;
    }
    return 0;
}
