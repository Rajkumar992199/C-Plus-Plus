#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
	string a;
    cin >> x >> a >> a;

    if(a == "month") {
        if(x <= 29)
            cout << 12 << endl;
        else if(x == 30)
            cout << 11 << endl;
        else
            cout << 7 << endl;
    }
    else {
        int ans = 52;
        if(x == 5 || x == 6)
            ans++;
        cout << ans << endl;
    }
}