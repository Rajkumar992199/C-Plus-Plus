#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int zero = count(s.begin(), s.end(), '0');
        int one = count(s.begin(), s.end(), '1');
        if(((abs(zero - one) / 2) % 2 == (k % 2)) && (abs(zero - one) / 2 <= k) ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}