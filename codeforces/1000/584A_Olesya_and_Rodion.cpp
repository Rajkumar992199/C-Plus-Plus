#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    if (t != 10) while (n--) cout << t;
    else {
        if (n == 1) cout << "-1";
        else {
            cout << 1;
            n--;
            while (n--) cout << 0;
        }
    }
    return 0;
}
