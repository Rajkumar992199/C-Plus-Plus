#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,b;
    cin >> t;
    for(int j=0;j<t;j++){
        int k=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(i>0){
                if(a[i] != a[i-1]) {
                k++;
                b=i;
                }
            }
        }
        if(k==2) cout << b << endl;
        else if (b==1) cout << 1 <<endl;
        else if (b==n-1) cout << b+1 << endl;
    }
}