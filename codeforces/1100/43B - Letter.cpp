#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);


    vector<int> v1(58, 0), v2(58, 0);
    for(char c : s1) {
        if(c == ' ')
            continue;
        v1[c - 'A']++;
    }

    for(char c : s2) {
        if(c == ' ')
            continue;
        v2[c - 'A']++;
    }

    for(int i = 0; i < 58; i++) {
        if(v2[i] > v1[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}