#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> n;
        int a[n],sum=0,c1=0;
        for(int j=0;j<n;j++){
            cin >> a[j];
            sum += a[j];
            if(a[j]%2 != 0) c1++;
        }
        if(sum%2==0 && c1%2==0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}