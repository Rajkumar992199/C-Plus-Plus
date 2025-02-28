#include<bits/stdc++.h>
using namespace std;

int main() {
    int t , n;
    cin >> t;
    while(t--) {
        string s;
        cin >> n >> s;
        int c = 0;
        for(int i = 0; i < n ; i++) {
            if (s[i] != s[i + 1]) for(int j = i + 1; j < n ; j++) {
                if (s[i] == s[j]) { 
                    cout << "NO" << endl;
                    c++;
                    break;
                }
            }
            if (c == 1) break;
        }
        if (c == 0) cout << "YES" << endl;
    }
}