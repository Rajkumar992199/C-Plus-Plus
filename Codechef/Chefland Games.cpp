#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int r1, r2, r3, r4, sum;
        cin >> r1 >> r2 >> r3 >> r4;
        sum = r1 + r2 + r3 + r4;
        if(sum) cout << "OUT\n";
        else cout << "IN\n";
    }
    return 0;
}
