#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, mx = INT_MAX;
    cin >> n;
    bool unrated = false;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a != b) {
            cout << "rated\n";
            return 0;
        }
        if (a > mx) 
            unrated = true;
        mx = a;
    }
    if (unrated)
        cout << "unrated\n";
    else 
        cout << "maybe\n";
    return 0;
}
