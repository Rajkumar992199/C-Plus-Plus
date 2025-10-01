#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n, ans = 0;
    cin >> n;
    while(n > 0) {
        n = n / 10;
        ans++;
    }
    cout << ans;
    return 0;
}
