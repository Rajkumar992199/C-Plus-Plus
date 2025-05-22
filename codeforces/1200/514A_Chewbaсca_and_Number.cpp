#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if ((i == 0 && s[i] != '9' ) || i > 0) {
            if (s[i] >= '5') s[i] = 105 - s[i];
        }
    }
    cout << s;
    return 0;
}
