#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, ans = 0;
    cin >> n >> x;

    vector<long long> a(n), pre(n + 1, 0);
    for(int i = 0; i < n; i++)  
        cin >> a[i];

    sort(a.begin(), a.end());
    
    for(int i = 0; i < n; i++) 
        pre[i + 1] = pre[i] + a[i];

    long long cnt = 0;
    for(int i = n; i > 0; i--) {
        if(pre[i] + i * cnt <= x) {
            long long temp = x - pre[i] - i * cnt;
            ans += i;
            cnt++;
            cnt += temp / i;
            ans += i * (temp / i);
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}