#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, n1, n2;
    cin >> n >> n1 >> n2;
    if(n1 > n2) 
        swap(n1, n2);
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a.rbegin(), a.rend());

    long long sum1 = 0, sum2 = 0;
    for(int i = 0; i < n1; i++) 
        sum1 += a[i];

    for(int i = 0; i < n2; i++) 
        sum2 += a[n1 + i];

    double ans = (sum1 * 1.0)/n1 + (sum2 * 1.0)/n2;

    cout << fixed << setprecision(8) << ans;
    return 0;
}