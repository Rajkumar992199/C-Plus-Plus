#include<bits/stdc++.h>
using namespace std;

int main() {
    int t , n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n] , k = 0 , min = 1000000000;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 1; i < n; i++) if(a[i]<a[i-1]) {
            cout << 0 << endl;
            k++;
            break;
        }
        if(k==1) continue;
        for(int i = 1; i < n; i++) {
            k = a[i] - a[i-1];
            if(min > k) min = k;
        }
        cout << min/2 + 1 << endl;
    }
}