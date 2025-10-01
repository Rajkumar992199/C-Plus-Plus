#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if (s == "()") 
            cout << "NO\n";
        else {
            cout << "YES\n";
            bool alt = true;
            for (int i = 1; i < n; i++) 
                if (s[i] == s[i - 1]) 
                    alt = false;
            if(alt) cout << string(n, '(') + string(n, ')') << endl;
            else {
                for (int i = 1; i <= n; i++)
                    cout << "()";
                cout << endl;
            }
        }
    }
    return 0;
}
