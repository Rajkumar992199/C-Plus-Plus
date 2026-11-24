#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a.begin(), a.end());

    int x = 0, y = n-1;
    long long ans = 0;
    while(x < y) {
        if(a[x]+a[y] < l)
            x++;
        else if(a[x]+a[y] > r)
            y--;
        else {
            int mn = x+1, mx = y;
            while(mn < mx) {
                int mid = (mn+mx)/2;
                if(a[x]+a[mid] < l)
                    mn = mid+1;
                else 
                    mx = mid;
            }
            ans += y-mn+1;
            x++;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}