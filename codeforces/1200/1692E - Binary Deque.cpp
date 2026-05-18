#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    vector<int> a(n), one;
    for(int i = 0; i < n; i++) { 
        cin >> a[i];
        if(a[i] == 1)
            one.push_back(i);
    }
    int cnt = one.size();

    if(cnt < s)
        cout << -1 << endl;
    else if(cnt == s)
        cout << 0 << endl;
    else {
        int diff = cnt - s;
        int ans = one[diff - 1] + 1;
        for(int i = 1; i <= diff; i++) {
            int temp = 0;
            if(diff - i - 1 >= 0) 
                temp += one[diff - i - 1] + 1;
            temp += n - one[cnt - i];
            ans = min(temp, ans);
        }
        cout << ans << endl;
    }
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