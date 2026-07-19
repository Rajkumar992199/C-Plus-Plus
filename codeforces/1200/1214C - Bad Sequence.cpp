#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    string s;
    cin >> n >> s;

    bool valid = true;
    for(int i = 0; i < n; i++) {
        if(s[i] == '(')
            cnt++;
        else
            cnt--;

        if(cnt < -1)
            valid = false;
    }
    if(cnt != 0)
        valid = false;

    if(valid)
        cout << "YES\n";
    else
        cout << "NO\n";
}