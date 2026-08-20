#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, m;
    cin >> n >> k >> m;

    vector<vector<int>> a(m);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x % m].push_back(x);
    }

    for (auto &v : a) {
        if(v.size() >= k) {
            cout << "Yes\n";
            for (int i = 0; i < k; i++)
                cout << v[i] << " ";
            return 0;
        }
    }

    cout << "No\n";
}