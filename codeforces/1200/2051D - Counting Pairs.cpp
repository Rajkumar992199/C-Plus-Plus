#include <bits/stdc++.h>
using namespace std;

long long calc(vector<long long>& a, long long x) {
    int n = a.size();
    long long s = 0;
    for (auto v : a) 
        s += v;

    int j = 0;
    long long ans = 0;

    for (int i = n - 1; i >= 0; i--) {
        while (j < n && s - a[i] - a[j] >= x) 
            j++;
        ans += (n - j);
    }

    for (int i = 0; i < n; i++) 
        if (s - a[i] - a[i] < x) 
            ans--;

    return ans / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        sort(a.begin(), a.end());

        cout << calc(a, y + 1) - calc(a, x) << endl;
    }

    return 0;
}