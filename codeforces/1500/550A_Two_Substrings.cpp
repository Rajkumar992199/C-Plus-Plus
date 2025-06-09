#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int pos = 0, temp;
    vector<int> ab, ba;
    while (s.find("AB", pos) != -1) {
        temp = s.find("AB", pos);
        pos = temp;
        if (pos >= s.size()) break;
        ab.push_back(pos);
        pos++;
    }
    pos = 0;
    while (s.find("BA", pos) != -1) {
        temp = s.find("BA", pos);
        pos = temp;
        if (pos >= s.size()) break;
        ba.push_back(pos);
        pos++;
    }
    if ((ab.size() > 0 && ba.size() > 0) && (abs(ab[0] - ba.back()) > 1 || abs(ba[0] - ab.back()) > 1)) {
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}
