#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x=0,max=0,a,b;
    cin >> n ;
    for(int i=0; i<n;i++){
        cin >> a >> b;
        x = b - a + x;
        if (max<x) max =x;
    }
    cout << max;
}