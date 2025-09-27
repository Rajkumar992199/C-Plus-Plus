#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0;
        string s;
        cin >> n >> s;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                cnt = 0;
            else cnt++;
            if(cnt > 3) break;
        }
        if(cnt > 3) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
