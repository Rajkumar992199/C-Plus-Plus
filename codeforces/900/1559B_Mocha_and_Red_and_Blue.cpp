#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 1; i < n; i++) 
            if (s[i] == '?' && s[i - 1] != '?') 
                s[i] = (s[i - 1] == 'B' ? 'R' : 'B');
        if (s[n - 1] == '?') 
            s[n - 1] = 'R';
        for (int i = n - 2; i >= 0; i--) 
            if (s[i] == '?') 
                s[i] = (s[i + 1] == 'B' ? 'R' : 'B');
        cout << s << "\n";
    }
    return 0;
}