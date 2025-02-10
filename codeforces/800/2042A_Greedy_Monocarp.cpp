#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        long long sum = 0,a[n],m=k;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for(int i=n-1;i>=0;i--){
            sum += a[i];
            if(sum>k) break;
            m -= a[i];
        } 
        cout << m << endl;
    }
}