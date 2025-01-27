#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,r,buy=0;
    cin >> k >> r;
    for(int i=1;i<=10;i++){
        buy++;
        if((k*i)%10==r||(k*i)%10==0) break;
    }
    cout << buy;
}