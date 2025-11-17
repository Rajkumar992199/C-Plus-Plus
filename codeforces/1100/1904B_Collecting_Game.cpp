#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    // vector a contains elements, index
    vector<pair<long long, int>> a(n);
    // prefix sum, answer
    vector<long long> pre(n), ans(n), temp(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first; // element
        a[i].second = i; // index
    }

    sort(a.begin(), a.end()); 

    for(int i = 0; i < n; i++) {
        // if i == 0 then pre[i] += a[i]
        // else pre[i] += pre[i - 1] + a[i]
        pre[i] += (i ? pre[i - 1] : 0) + a[i].first;
        temp[i] = i; // storing by default value at original index
    }

    for(int i = n - 1; i > 0; i--) 
        if(pre[i] <= pre[i - 1] * 2) 
            temp[i - 1] = temp[i];

    // storing at original index from sorted index
    for(int i = 0; i < n; i++) 
        ans[a[i].second] = temp[i];

    for(auto it : ans) 
        cout << it << " "; // answer
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t; // test cases
    cin >> t;
    while(t--)
        solve();
    return 0;
}