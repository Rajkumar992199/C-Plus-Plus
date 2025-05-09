#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, sub = "WUB";
    cin >> s;
    while (s.find(sub) != -1) {
        int i = s.find(sub);
        s.replace(i, 3," ");
        while(s.find(sub) == i + 1) s.replace(i + 1,3 ,"");
        while (s[0] == ' ') s.replace(0,1,"");
    }
    cout << s << endl;
}