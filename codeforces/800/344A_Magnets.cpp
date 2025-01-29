#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k=0;
    cin >> n;
    int p[n];
    for(int i=0; i<n;i++){
        cin >> p[i] ;
        if(p[i] == p[i-1]) continue;
        k++;
    }
    cout << k ;
}