#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        if(n > x) {
            for(int i = 0; i < n; i++) {
                if(i != x) cout << i << " ";
            }
            cout << x << endl;
        }
        else {
            for(int i = 0; i < n; i++) 
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}