#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,c1=0,c2=0,i=0;
    cin >> n;
    while(c2<=n){
        i++;
        c1 += i;
        c2 += c1;
    }
    cout << i-1;
}