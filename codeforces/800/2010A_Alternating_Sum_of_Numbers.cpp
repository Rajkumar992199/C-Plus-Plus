#include<bits/stdc++.h>
using namespace std;

int main() {
    int t , n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n] , x = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) x += a[i];
            else x -= a[i];
        }
        cout << x << endl;
    }
}