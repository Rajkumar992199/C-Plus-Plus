#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<long long> a(n), l(n, 0), r(n, 0);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    for(int i = 0; i < n - 1; i++) 
        l[i + 1] = max(l[i + 1] , a[i] - a[i + 1]); // left to right
    for(int i = 1; i < n; i++) 
        r[i] = max(r[i] , a[i] - a[i - 1]); // right to left
    
    for(int i = 0; i < n - 1; i++) {
        l[i + 1] += l[i];
        r[i + 1] += r[i];
    }

    while(m--) {
        int s, t;
        cin >> s >> t;
        if (s < t) // left to right
            cout << l[t - 1] - l[s - 1] << endl;
        else // right to left
            cout << r[s - 1] - r[t - 1] << endl;
    }
    return 0;
}
