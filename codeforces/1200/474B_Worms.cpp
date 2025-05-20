#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    cin >> n;
    vector<long long> q(n + 1);
    q[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        q[i + 1] = q[i] + a;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;
        int count = lower_bound(q.begin(), q.end(), a) - q.begin();
        cout << count << endl;
    }
    return 0;
}
