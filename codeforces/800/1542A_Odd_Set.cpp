#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int x=0,y=0,a[2*n];
        for(int i=0;i<2*n;i++){
            cin >> a[i];
            if(a[i]%2==0) x++;
            else y++;
        }
        if(x==n && y==n) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}