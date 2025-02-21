#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[n],m=0;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) {
            if(a[i]==k) {
                m++;
                break;
            }
        }
        if(m==0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}