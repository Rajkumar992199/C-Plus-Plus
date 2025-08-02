#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    sort(v.begin(), v.end());
    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) 
        prefix[i] = prefix[i - 1] + v[i - 1];

    while (q--) {
        int x, y;
        cin >> x >> y;
        int i = n - x;
        int j = i + y;
        cout << prefix[j] - prefix[i] << endl;
    }
    return 0;
}
