#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;

    int ans = 0, diff = 0;
    char c = '0';
        

    for(int i = 0; i < n; i++) {
        if(s[i] == c) 
            ans++;
        else {
            diff++;
            ans += 2;
            c = s[i];
        }
    }
    if(diff > 2) 
        ans -= 2;
    else if(diff == 2)
        ans -= 1;

    cout << ans << endl;
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

	int t; 
    cin >> t;
    while(t--)
        solve();

    return 0;
}
