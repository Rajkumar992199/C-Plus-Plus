#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a.begin(), a.end());

    long long ans = 0;
    for(int i = 0; i < n; i++) 
        ans += abs(a[i]-i-1);

    cout << ans;
    
    return 0;
}