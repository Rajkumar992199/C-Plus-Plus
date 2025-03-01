#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        set<char> s;
        s.insert(s1[0]);
        s.insert(s1[1]);
        s.insert(s2[0]);
        s.insert(s2[1]);
        if(s.size() == 1) cout << 0 << endl;
        else if(s.size() == 2) cout << 1 << endl;
        else if(s.size() == 3) cout << 2 << endl;
        else cout << 3 << endl;
    }
}