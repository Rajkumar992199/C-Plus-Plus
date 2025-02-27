#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n],x;
        for (int i = 0; i < n; i++) cin >> a[i];
        x= a[0];
        for (int i = 1; i < n; i++) x = x ^ a[i];
        if(n % 2 == 1 || (n % 2 == 0 && x == 0)) cout << x << endl;
        else cout << -1 << endl;
    }
}