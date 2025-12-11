#include <bits/stdc++.h>
using namespace std;

int erase(string s, char c) {
    int i = 0, j = s.size() - 1, ans = 0;
    while (i < j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        } else if (s[i] == c) {
            i++;    // delete s[i]
            ans++;
        } else if (s[j] == c) {
            j--;    // delete s[j]
            ans++;
        } else {
            return INT_MAX; // not possible
        }
    }
    return ans;
}
void solve() {
    int n, ans1 = 0, ans2 = 0;
    string s;
    cin >> n >> s;

    // only will change when string is not plindrom 
    char a = 'A', b = 'B'; 
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) {
            a = s[i];
            b = s[n - i - 1];
            break;
        }
    }
    
    if(a == 'A') // already palindrom
        cout << 0 << endl;
    else {
        ans1 = erase(s, a);
        ans2 = erase(s, b);
        int ans = min(ans1, ans2);
        if(ans == INT_MAX)
            cout << -1 << endl; // not possible
        else cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}
