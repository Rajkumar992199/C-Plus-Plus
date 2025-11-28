#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k1, k2;
    cin >> n >> k1 >> k2;
    k1 += k2;

    vector<long long> a(n), b(n);
    priority_queue<long long> q;
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        q.push(abs(a[i] - b[i]));
    }

    while(k1 > 0) {
        long long x = q.top();
        q.pop();
        if(x == 0) break;
        k1--, x--;
        q.push(x);
    }
    long long ans = 0;
    while(q.size()) {
        ans += q.top() * q.top();
        q.pop();
    }
    // if k1 remaining odd then it will increment answer
    if(k1 % 2) ans++;
    cout << ans << endl;
    return 0;
}
