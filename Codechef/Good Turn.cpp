#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        // your code goes here
        if(x + y > 6) cout << "YES\n";
        else cout << "NO\n";
    }
	return 0;
}
