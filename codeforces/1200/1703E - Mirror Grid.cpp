#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, ans = 0;
    cin >> n;

    vector<string> s(n);

    for(int i = 0; i < n; i++) 
        cin >> s[i];

    for(int i = 0; i < n - 1; i++) {
        for(int j = i; j < n - i; j++) {
            if(i != j && i == n - j - 1) 
                continue;
            long long cnt = 0;
            cnt += s[i][j] - '0';
            cnt += s[j][n - i - 1] - '0';
            cnt += s[n - i - 1][n - j - 1] - '0';
            cnt += s[n - j - 1][i] - '0';
            ans += min(cnt, 4 - cnt);
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