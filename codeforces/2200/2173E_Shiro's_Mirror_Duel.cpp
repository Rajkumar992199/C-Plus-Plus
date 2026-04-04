#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n + 1);
    vector<int> loc(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
        loc[p[i]] = i;
    }

    auto ask_swap = [&](int i, int j) {
        cout << "? " << i << " " << j << endl;
        int u, v;
        cin >> u >> v;
        if (u == -1) return;

        int val_u = p[u];
        int val_v = p[v];

        swap(p[u], p[v]);
        loc[val_u] = v;
        loc[val_v] = u;
    };

    // Fix pairs (1, n), (2, n-1), ...
    for (int L = 1; L <= n / 2; ++L) {
        int R = n - L + 1;

        while (p[L] != L || p[R] != R) {
            int posL = loc[L];
            int posR = loc[R];

            // If L and R are at each other's positions, swap them directly
            if (posL == R) {
                ask_swap(L, R);
                continue;
            }
            if (posR == L) {
                ask_swap(L, R);
                continue;
            }

            // If left side is already correct, try to fix right
            if (p[L] == L) 
                ask_swap(posR, R);
            else // Otherwise focus on fixing left
                ask_swap(posL, L);
        }
    }

    cout << "!" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}
