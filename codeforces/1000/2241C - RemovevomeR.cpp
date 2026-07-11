#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
 
    bool oz = false, zo = false;
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == '1' && s[i + 1] == '0')
            oz = true;
        else if(s[i] == '0' && s[i + 1] == '1')
            zo = true;
    }
    
    if(zo ^ oz)
        cout << 2 << endl;
    else
        cout << 1 << endl;
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