#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if (n % 2 == 1) {
            for(int i = 0; i < n / 2; i++) cout << "-1 3 ";
            cout << "-1" << endl;
        }
        if(n % 2 == 0) {
            for(int i = 1; i < n / 2; i++) cout << "-1 3 ";
            cout << "-1 2" << endl;
        }
    }
    return 0;
}