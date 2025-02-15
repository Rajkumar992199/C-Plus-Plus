#include<bits/stdc++.h>
using namespace std;

int main() {
    long int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long int a[n],count=1,num=0;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for(int i=1;i<n;i++) {
            if(a[i-1] == a[i]) {
                count++;
                if(count==3) num=a[i];
            }
            else count=1;
        }
        if(num>0) cout << num << endl;
        else cout << -1 << endl;
    }
}