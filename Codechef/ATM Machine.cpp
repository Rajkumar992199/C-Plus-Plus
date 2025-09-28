#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k, a;
        cin >> n >> k;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(k >= a) {
                k -= a;
                cout << 1;
            }
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}
