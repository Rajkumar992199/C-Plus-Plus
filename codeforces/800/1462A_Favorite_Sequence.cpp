#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n/2; i++) cout << a[i] << " " << a[n - i - 1] << " ";
        if(n % 2 != 0 ) cout << a[n / 2] << " ";
        cout << endl;
    }
}