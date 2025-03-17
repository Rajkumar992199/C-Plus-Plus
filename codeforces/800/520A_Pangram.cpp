#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++) s[i] = toupper(s[i]);
    set<char> c(s.begin(),s.end());
    if(c.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
}