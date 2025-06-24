#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, count = 0, x = 0, y;
        cin >> n >> m;
        string s;
        for (int i = 0; i < n; i++) {
            cin >> s;
            if (s.find('#') == s.rfind('#') && s.find('#') != -1) {
                y = s.find('#') + 1;
                if(count == 0) x = i + 1;
                else x = (x + i + 1) / 2;
                count++;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}