#include <bits/stdc++.h>  
using namespace std;

void solve() {
    string s;

    for(int i = 0; i < 9; i++) {
        cin >> s;
        for(int i = 0; i < 9; i++) {
            if(s[i] == '1')
                s[i] = '3';
        }
        cout << s << '\n';
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