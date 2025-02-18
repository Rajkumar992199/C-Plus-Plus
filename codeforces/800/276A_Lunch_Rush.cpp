#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,k,f,t,joy,max=(-1000000000);
    cin >> n >> k;
    while(n--){
        cin >> f >> t;
        if(t>k) joy = f-(t-k);
        else joy = f;
        if (joy>max) max = joy;
    }
    cout << max ;
}