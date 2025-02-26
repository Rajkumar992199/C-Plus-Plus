#include<bits/stdc++.h>
using namespace std;

int main() {
    int t , n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],c1 = 0, c2 = 0, step = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == -1) c1++;
            else c2++;
        }
        while(c1 > c2 || c1 % 2 != 0) {
            c1--;
            c2++;
            step++;
        }
        cout << step << endl;
    }
}