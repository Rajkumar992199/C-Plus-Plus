#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    multimap<int, int> b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b.insert({(a[i] - 1) / m, i + 1});
    }
    auto it = b.rbegin();
    cout << it->second;
    return 0;
}