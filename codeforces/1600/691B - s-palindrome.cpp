#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();
    int mid = n / 2 + (n % 2);

    string same = "AHIMOoTUVvWwXxY";
    map<char, char> mirror = {{'b', 'd'}, {'d', 'b'}, {'p', 'q'}, {'q', 'p'}};

    for(int i = 0; i < mid; i++) {
        bool found = false;
        if(mirror.count(s[i])) {
            found = true;
            if(s[n - i - 1] != mirror[s[i]]) {
                cout << "NIE";
                return 0;
            }
        }
        else {
            for(char c: same) {
                if(c == s[i]) {
                    found = true;
                    if(s[n - i - 1] != s[i]) {
                        cout << "NIE";
                        return 0;
                    }
                    break;
                }
            }
        }

        if(!found) {
            cout << "NIE";
            return 0;
        }
    }

    cout << "TAK";
    
    return 0;
}