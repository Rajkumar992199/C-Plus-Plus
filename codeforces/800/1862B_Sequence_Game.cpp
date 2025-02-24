#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],m=n;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=1;i<n;i++) if(a[i]<a[i-1]) m++;
        cout << m << endl;
        for(int i=1;i<n;i++) {
            cout << a[i-1] << " ";
            if(a[i]<a[i-1]) cout << a[i] << " "; 
        }
        cout << a[n-1] << " " << endl;
    }
}