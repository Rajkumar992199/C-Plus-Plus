#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    // length of vector, count of one's
    int n, cnt = 0;
    long long gcd = 0, adj;
    cin >> n;

    vector<long long> v(n); 
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] == 1) cnt++; // counting one's
        gcd = __gcd(gcd, v[i]); // gcd of elements
        if(i && adj != 1) adj = __gcd(v[i], v[i - 1]); // adjacent element's gcd
    }

    //number of operations = vector size - number of one's (if one is present)
    if(cnt) cout << n - cnt;
    else if(adj == 1) cout << n; // only n operations required
    else if(gcd != 1) cout << -1; // gcd 1 is not possible
    else {
        int mn = n; 
        for(int i = 0; i < n; i++) {
            gcd = 0;
            for(int j = i; j < n; j++) {
                gcd = __gcd(gcd, v[j]);
                if(gcd == 1) mn = min(mn, j - i); // minimum element's gcd to get 1
            }
        }
        cout << n + mn - 1; // answer
    }
    return 0;
}