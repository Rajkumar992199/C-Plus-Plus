#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        long long k = 0;
        if (a % b != 0) k++;
        if (a - (a / b + k) > c) 
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    return 0;
}