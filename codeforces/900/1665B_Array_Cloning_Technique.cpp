#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        map<long long, long long> mp;
        for (int i = 0; i < n; i++) mp[a[i]]++;
        if (mp.size() == 1) {
            cout << 0 << endl;
            continue;
        }
        long long freq = 0, operations = 0;
        for (auto i : mp) freq = max(freq, i.second);
        while (freq < n) {
            operations++;
            if (freq * 2 <= n){
                operations += freq;
                freq *= 2;
            }
            else {
                operations += n - freq;
                freq = n;
            }
        }
        cout << operations << endl;
    }
    return 0;
}