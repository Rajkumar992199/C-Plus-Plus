#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        int no = 0;
        cin >> n;
        while(n > 9) {
            no += 9;
            n /= 10;
        }
        no += n;
        cout << no << endl;
    }
}