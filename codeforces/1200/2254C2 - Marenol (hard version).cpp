#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    int even = 0, odd = 1;
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        if(s2[i] == '1') {
            if(i % 2 == 0) {
                while(even < n && s1[even] != '1') {
                    even += 2;
                }

                if(even < n && s1[even] == '1')
                    ans += abs(even - i) / 2;
                else {
                    cout << -1 << endl;
                    return;
                }
                even += 2;
            }
            else {
                while(odd < n && s1[odd] != '1') {
                    odd += 2;
                }

                if(odd < n && s1[odd] == '1')
                    ans += abs(odd - i) / 2;
                else {
                    cout << -1 << endl;
                    return;
                }
                odd += 2;
            }
        }
    }
    while(odd < n) {
        if(s1[odd] == '1') {
            cout << -1 << endl;
            return;
        }
        odd += 2;
    }
    while(even < n) {
        if(s1[even] == '1') {
            cout << -1 << endl;
            return;
        }
        even += 2;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();
    
    return 0;
}
