#include<bits/stdc++.h>
using namespace std;

bool lier(int n) {
    vector<int> a(n);
    int c = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            if (a[i - 1] == 0) return true;
            c++;
        }
    }
    if (c) return false;
    else return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (lier(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
