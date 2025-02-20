#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],m;
        for(int i=0;i<n;i++) cin >> a[i];
        m = *min_element(a,a+n);
        if(a[0]==m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}