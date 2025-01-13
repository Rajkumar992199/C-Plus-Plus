#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,h,max=0;
    cin >> n ;
    cin >> h ; 
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
        if(a[i]>h) max += 2;
        else max += 1;
    }
    cout << max;
}