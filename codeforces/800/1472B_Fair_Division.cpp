#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        int a[n],c1=0,c2=0;
        for(int j=0;j<n;j++){
            cin >> a[j];
            if(a[j]==1) c1++;
            else c2++;
        }
        if((n%2==0 && c1%2!=0)||(n%2!=0 && (c2==n || c1==n || c1%2!=0))) cout<< "NO" << endl;
        else cout << "YES" << endl;
    }
}