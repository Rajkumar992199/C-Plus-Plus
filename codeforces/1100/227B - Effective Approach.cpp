
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> pos(n + 1);

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        pos[num] = i;
    }

    int m;
    cin >> m;

    long long sum1 = 0, sum2 = 0;

    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;

        sum1 += pos[q];
        sum2 += n - pos[q] + 1;
    }

    cout << sum1 << " " << sum2 << '\n';

    return 0;
}
