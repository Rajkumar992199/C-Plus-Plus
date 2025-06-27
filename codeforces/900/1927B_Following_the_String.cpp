#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        string s;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> m;
            s += 'a' + a[m];
            a[m]++;
        }
        cout << s << endl;
    }
    return 0;
}