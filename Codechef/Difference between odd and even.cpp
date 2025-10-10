#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n, ans = 0, a; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(i % 2== 0) ans += a;
        else ans -= a;
    }
    cout << ans;
}
