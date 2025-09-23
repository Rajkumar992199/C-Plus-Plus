#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--) {
        int x;
        cin >> x;
        if(x > 5000) x -= 500;
        else if (x > 1000 && x <= 5000) x -= 100;
        else if (x > 100 && x <= 1000) x -= 25;
        cout << x << endl;
    }
    return 0;
}
