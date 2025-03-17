#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int a = stoi(s), l = s.size(), k = (a / pow(10 , l - 3));
        if (a < 102 || (k / 100) != 1 || (k % 10) == 0 || (k / 10) % 10 != 0) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
        }
    }
}