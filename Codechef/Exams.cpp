#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if(X * Y < 2 * Z) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
