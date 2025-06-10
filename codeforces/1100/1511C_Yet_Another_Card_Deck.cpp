#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, q, color;
    cin >> n >> q;
    vector<int> a(n), pos(51, n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (pos[a[i]] == n + 1) pos[a[i]] = i + 1;
    }
    for (int i = 0; i < q; i++) {
        cin >> color;
        int ans = pos[color];
        for (int j = 1; j <= 50; j++) 
            if (pos[j] < ans) pos[j]++;
        pos[color] = 1;
        cout << ans << " ";
    }
    return 0;
}