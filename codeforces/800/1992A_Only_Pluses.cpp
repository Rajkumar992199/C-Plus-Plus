#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, a[3];
    cin >> t;
    while(t--) {
        for(int i = 0; i < 3; i++) cin >> a[i];
        for(int i = 0; i < 5; i++) {
            sort(a , a + 3);
            a[0] += 1;
        }
        cout << a[0]*a[1]*a[2] << endl;
    }
}