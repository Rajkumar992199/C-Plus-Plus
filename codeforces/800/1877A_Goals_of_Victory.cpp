#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n-1],ans=0;
        for(int i=0;i<n-1;i++) {
            cin >> a[i];
            ans -= a[i];
        }
        cout << ans << endl;
    }
}