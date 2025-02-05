#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n,k=0;
    cin >> m >> n;
    if(m==2) {
        if(n==3) k++;
        }
    else if(m==3) {
        if(n==5) k++;
        }
    else if(m==23 || m==31 ) {
        if(n == m+6) k++;
        }
    else if(m==25 || n==25 || m==35 || n==35 || m==49 || n==49) ;
    else if(m%6==5){
        if(n==m+2) k++;
    }
    else if(m%6==1){
        if(n==m+4) k++;
    }
    if(k==1) cout << "YES" << endl;
    else cout << "NO" << endl;
}