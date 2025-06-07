#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int MAX = 100001;
    vector<long long> count(MAX, 0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        count[x]++;
    }
    vector<long long> f(MAX, 0);
    f[0] = 0;
    f[1] = count[1];
    for (int i = 2; i < MAX; ++i) {
        f[i] = max(f[i - 1], f[i - 2] + count[i] * i);
    }
    cout << f[MAX - 1] << endl;
    return 0;
}
