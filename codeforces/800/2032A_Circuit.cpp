#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[2*n],sum=0;
        for(int i=0;i<2*n;i++) {
            cin >> a[i];
            sum += a[i];
        }
        cout << sum%2 << " " ;
        if(sum<=n) cout << sum << endl;
        else cout << 2*n - sum << endl;
    }
}