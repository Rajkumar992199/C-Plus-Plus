#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0, mx = 0, ans = 0;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        for (int i = 1; i < n; i++) freq.insert({i, 0});
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i] - 1]++;
        }
        for (auto it : freq) if(it.second > 0) count++;
        for (auto it : freq) if (it.second > mx) mx = it.second; 
        ans = min(count - 1, mx);
        if (mx - count > 0) ans++;
        cout << ans << endl;
    }
}