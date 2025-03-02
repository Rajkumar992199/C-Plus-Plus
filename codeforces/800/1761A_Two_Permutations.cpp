#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a, b;
    cin >> t;
    while(t--) {
        cin >> n >> a >> b;
        if((n == a && n == b)|| (n !=2 && n!=3 && n>3 && (n-a-b > 1))) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}