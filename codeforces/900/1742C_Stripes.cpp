#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s[8];
        char ans = 'B';
        for (int i = 0; i < 8; i++) cin >> s[i]; // taking horizontal strips
        for (int i = 0; i < 8; i++) {
            if(s[i].find('B') == -1) 
                ans = 'R';
        }
        cout << ans << endl;
    }
    return 0;
}