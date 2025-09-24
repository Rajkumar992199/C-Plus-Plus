#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0, mn = INT_MAX;
    cin >> n;
    while(n--) {
        int a , p;
        cin >> a >> p;
        mn = min(mn , p); //if price is higher then we will use stored meat
        ans += a * mn;
    }
    cout << ans;
    return 0;
}