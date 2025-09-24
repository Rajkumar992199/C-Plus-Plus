#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x, ans;
        cin >> n >> x;
        ans = n * x / 4; // how many full pizza required?
        ans += (n * x) % 4 != 0; //if more slices required then add 1 more pizza
        cout << ans << endl;
    }
    return 0;
}
