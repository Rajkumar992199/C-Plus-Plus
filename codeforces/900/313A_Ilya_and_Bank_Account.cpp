#include<bits/stdc++.h>
using namespace std;

void balance(string s) {
    if (s[0] != '-') cout << s;
    else {
        int x;
        if (s.size() < 3 || (s.size() == 3 && s[s.size() - 1] == '0')){
            cout << 0;
        }
        else {
            if (s[s.size() - 1] > s[s.size() - 2]) x = s.size() - 1;
            else x = s.size() - 2;
            for (int i = 0; i < s.size(); i++) if (i != x) cout << s[i];
        }
    }
    return ;
}

int main() {
    string s;
    cin >> s;
    balance(s);
    return 0;
}
