#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        for (int i = 0; i < b; i++)
            s += 'a' + i;
        for (int i = 0; i < a - b; i++)
            s += 'a';
        for (int i = 0; i < n - a; i++)
            s += s[i];
        cout << s << endl;
    }
    return 0;
}