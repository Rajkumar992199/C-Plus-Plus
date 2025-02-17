#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,a[4],b[4],ans;
    cin >> t;
    while(t--){
        for(int i=0;i<4;i++) cin >> a[i] >> b[i];
        sort(a,a+4);
        sort(b,b+4);
        ans = abs(a[0]-a[2])*abs(b[0]-b[2]);
        cout << ans << endl;
    }
}