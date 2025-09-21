#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--) {
        int B1, B2, B3;
        cin >> B1 >> B2 >> B3;
        if(B1 + B2 + B3 > 1) cout << "Not now" << endl;
        else cout << "Water filling time" << endl;
    }
    return 0;
}
