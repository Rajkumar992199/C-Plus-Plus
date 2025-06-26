#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, ans = 0;
        string s;
        cin >> n >> s;
        for (string sul : {"mapie", "pie", "map"}) {
            for (size_t pos = 0; (pos = s.find(sul, pos)) != -1;) {
                s[pos + sul.length() / 2] = '?';
                ans++;
            }
	    }
        cout << ans << endl;
    }
    return 0;
}