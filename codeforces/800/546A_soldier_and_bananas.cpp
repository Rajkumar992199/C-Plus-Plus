#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w,j,x=0;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++){
        j = k*i;
        n = n-j;
    }
    if(n<0){
        x = -n;
    }
    cout << x;
}