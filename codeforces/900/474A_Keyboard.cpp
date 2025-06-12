#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    string s;
    cin >> c >> s;
    map <char, char> right, left;
    for (int i = 0; i < s1.size() - 1; i++) {
        right[s1[i + 1]] = s1[i];
        left[s1[i]] = s1[i + 1];
    }
    if (c == 'R') {
        for (int i = 0; i < s.size(); i++) 
            cout << right[s[i]];
    }
    else {
        for (int i = 0; i < s.size(); i++) 
            cout << left[s[i]];
    }
    return 0;
}