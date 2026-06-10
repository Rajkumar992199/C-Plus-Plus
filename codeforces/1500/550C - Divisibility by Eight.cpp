#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int v1, v3;
    bool mod0 = false, mod1 = false, mod3 = false;
    bool two = false, four = false, six = false;
    
    for(int i = s.size() - 1; i >= 0; i--) {
        int x = s[i] - '0';
        if(x == 0 || x == 8) {
            cout << "YES\n" << x;
            return 0;
        }
        if(x == 2) { 
            if(four) {
                cout << "YES\n" << 24;
                return 0;
            }
            two = true;
        }
        else if(x == 4) {
            if(four) 
                mod0 = true;
            four = true;
        }
        else if(x == 6) {
            if(four) {
                cout << "YES\n" << 64;
                return 0;
            }
            six = true;
        }
        
        if(six) {
            if(x % 4 == 1) {
                cout << "YES\n" << x << 6;
                return 0;
            }
            else if(x % 4 == 3 && !mod3) {
                mod3 = true;
                v3 = x;
                continue;
            }
        }
        if(two) {
            if(x % 4 == 3) {
                cout << "YES\n" << x << 2;
                return 0;
            }
            else if(x % 4 == 1 && !mod1) {
                mod1 = true;
                v1 = x;
                continue;
            }
        }

        if(x % 2 == 1) {
            if(mod0) {
                cout << "YES\n" << x << 44;
                return 0;
            }
            else if(mod1) {
                cout << "YES\n" << x << v1 << 2;
                return 0;
            }
            else if(mod3) {
                cout << "YES\n" << x << v3 << 6;
                return 0;
            }
        }
    }
    cout << "NO\n";
       
    return 0;
}