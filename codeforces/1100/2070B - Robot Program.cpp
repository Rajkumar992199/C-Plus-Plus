#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, idx0 = -1, idx = -1, pos = 0;
    long long k;
    string s;
    cin >> n >> x >> k >> s;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') {
            x--;
            pos--;
        }
        else {
            x++;
            pos++;
        }
        if(idx0 == -1 && x == 0)
            idx0 = i + 1;
        if(idx == -1 && pos == 0)
            idx = i + 1;
    }
    if(idx0 == -1)
        cout << 0 << endl;
    else if(idx == -1)
        cout << 1 << endl;
    else {
        k -= idx0;
        cout << 1 + k / idx << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}