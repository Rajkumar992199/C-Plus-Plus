#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    int len = 0, mx = 0, cnt = 0;
    bool in = false, word = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == '_' && !in) 
            len = 0;
        else if(s[i] == '(') {
            len = 0;
            in = true;
        }
        else if(s[i] == ')') {
            in = false;
            word = false;
        }
        else if(!in) {
            len++;
        }
        else if(!word && s[i] != '_'){
            cnt++;
            word = true;
        }
        else if(word && s[i] == '_')
            word = false;
        
        mx = max(mx, len);
    }
    cout << mx << " " << cnt;
}