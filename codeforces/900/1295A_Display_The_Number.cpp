#include <bits/stdc++.h>
using namespace std;

int t;
int main() {
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) 
            for(int i = 0; i < n / 2; i++)
                cout << "1";
        else {
            cout << "7";
            for(int i = 0; i < (n - 3) / 2; i++)
                cout << "1";
        }
        cout << endl;
    }
    return 0;
}