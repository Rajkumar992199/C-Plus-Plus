#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int mili = (k*l)/nl, slice = c*d,salt=p/np;
    cout << min(min(mili,slice),salt)/n;
}