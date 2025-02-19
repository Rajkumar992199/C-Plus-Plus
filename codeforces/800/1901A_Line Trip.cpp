#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int a[n],max1=0;
        for(int i=0;i<n;i++) cin >> a[i];
        max1 = max(a[0],2*(x-a[n-1]));
        for(int i=1;i<n;i++) if(max1< (a[i]-a[i-1])) max1 = a[i]-a[i-1];
        cout << max1 << endl;
    }
}