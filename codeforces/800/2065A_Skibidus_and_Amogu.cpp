#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        n = s.size();
        for(int i = 0; i < n - 2; i++) cout << s[i];
        cout << "i" << endl;
    }
}