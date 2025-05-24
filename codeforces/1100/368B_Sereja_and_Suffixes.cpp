#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m;
    vector<int> a(n), b(n);
    set<int> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n - 1; i >= 0; i--) {
        s.insert(a[i]);
        b[i] = s.size();
    }
    for (int i = 0; i < m; i++) {
        cin >> l;
        cout << b[l - 1] << endl;
    }
    return 0;
}
