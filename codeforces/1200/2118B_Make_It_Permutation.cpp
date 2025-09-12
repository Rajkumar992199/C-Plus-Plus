#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<tuple<int, int, int>> ops;
        for (int i = 2; i <= n; i++) 
            ops.emplace_back(i, 1, i);
        for (int i = 1; i < n; i++) 
            ops.emplace_back(i, i + 1, n);
        cout << ops.size() << '\n';
        for (auto it : ops) {
            int first = get<0>(it);
            int second = get<1>(it);
            int third = get<2>(it);
            cout << first << " " << second << " " << third << endl;
        }
    }
    return 0;
}
