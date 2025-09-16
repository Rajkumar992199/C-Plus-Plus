#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--) {
        int A, B, C;
        cin >> A >> B >> C;
        if (A + B > 2 * C) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
