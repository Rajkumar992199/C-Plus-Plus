#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    bool flag = true;
    for (int i = 0; i < n.size(); i++) {
        if ((n[i] != '1' && n[i] != '4') || n[0] == '4') {
            flag = false;
            break;
        }
        if (i < n.size() - 2 && n[i] == '4' && n[i + 1] == '4' && n[i + 2] == '4') {
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}