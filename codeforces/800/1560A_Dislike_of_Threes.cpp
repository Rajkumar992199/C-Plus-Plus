#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 0;
        cin >> n;
        for(int i = 1; ;i++) {
            if(i % 3 == 0 || i % 10 == 3) continue;
            if(n == 1) {
                cout << i << endl; 
                break;
            }
            n--;
        }
    }
    return 0;
}