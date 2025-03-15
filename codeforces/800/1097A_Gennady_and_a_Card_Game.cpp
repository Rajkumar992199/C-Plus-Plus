#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, s1;
    cin >> s;
    for (int i = 0; i < 5; i++) {
        cin >> s1;
        if (s[0] == s1[0] || s[1] == s1[1]) {
            cout << "YES";
            break;
        }
        if(i == 4) cout << "NO";
    }
}