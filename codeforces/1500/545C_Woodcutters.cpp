#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, ans = 1, r;
    cin >> n;
    vector<pair<long long, long long>> x(n + 1);
    for (int i = 0; i < n; i++) 
        cin >> x[i].first >> x[i].second;
    x[n].first = INT_MAX, x[n].second = 0;
    r = x[0].first;
    for (int i = 1; i < n; i++) {
        if (r != x[i].first && x[i].first - x[i].second > r) {
            ans++;
            r = x[i].first;
        }
        else if (x[i].first + x[i].second < x[i + 1].first) {
                ans++;
                r = x[i].first + x[i].second;
        }
        else r = x[i].first;
    }
    cout << ans << endl;
    return 0;
}