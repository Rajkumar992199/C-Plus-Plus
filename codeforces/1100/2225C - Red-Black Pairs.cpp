#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    char arr[2][n] = {0};
    for(long long i = 0; i < 2; i++) 
        for(long long j = 0; j < n; j++) 
            cin >> arr[i][j];

    vector<long long> dp(n+1,1e18);
    dp[0] = 0;
    for(long long i = 0; i < n; i++) {
        dp[i+1] = min(dp[i+1],dp[i] + (arr[0][i] != arr[1][i]));
        if(i+2 <= n)
            dp[i+2] = min(dp[i+2],dp[i] + (arr[0][i] != arr[0][i+1]) + (arr[1][i] != arr[1][i+1]));
    }
    cout << dp[n] << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    long long t;
    cin>>t;
    while(t--)
        solve();
}