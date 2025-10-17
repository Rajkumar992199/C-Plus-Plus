#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        struct Op { int m, i; };
        vector<Op> ops;
        auto swap_op = [&](int m, int i) {
            if (m == 1) swap(a[i - 1], a[i]);
            else if (m == 2) swap(b[i - 1], b[i]);
            else swap(a[i - 1], b[i - 1]);
            ops.push_back({m, i});
        };
        for (int i = 0; i < n; ++i) {
            int A = i + 1, B = n + i + 1, pos = i, q = i;
            while (pos < n && a[pos] != A && b[pos] != A) ++pos;
            if (b[pos] == A) swap_op(3, pos + 1);
            while (pos > i) { 
                swap_op(1, pos); 
                --pos; 
            }
            while (q < n && a[q] != B && b[q] != B) 
                ++q;
            if (a[q] == B) swap_op(3, q + 1);
            while (q > i) { 
                swap_op(2, q); 
                --q; 
            }
        }
        cout << ops.size() << '\n';
        for (auto it : ops) cout << it.m << ' ' << it.i << '\n';
    }
    return 0;
}