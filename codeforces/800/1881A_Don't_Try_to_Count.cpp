#include<bits/stdc++.h>
using namespace std;

bool compare(string s, string x){
    if (x.size() < s.size()) return false;
    for (int i = 0; i <= x.size(); i++) if (x.substr(i,s.size()) == s) return true;
    return false;
}

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        string x1 = x + x;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;
        long long ans = -1;
        if (compare(s, x)) ans = 0;
        else if (compare(s, x1)) ans = 1;
        else if (compare(s, x2)) ans = 2;
        else if (compare(s, x3)) ans = 3;
        else if (compare(s, x4)) ans = 4;
        else if (compare(s, x5)) ans = 5;
        cout << ans << endl;
    }
}