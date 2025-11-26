#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int nxt = 1;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans++;
        if (s[i] != '1')
            break;
    }
    cout << ans << endl;
}
