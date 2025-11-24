#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a.begin(), a.end());
    long long ans = 0;
    for(int i = 0; i < n / 2; i++) 
        ans += (a[i] + a[n - i - 1]) * (a[i] + a[n - i - 1]);
    cout << ans;
    return 0;
}
