#include<bits/stdc++.h>
using namespace std;

int findmin(int x, int y) {
    return (x < y) ? x : y;
}

int main() {
    int n,k,l,c,d,p,nl,np,toast;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int slice = c*d, mili = k*l;
    toast = findmin(findmin(slice,mili),p)/3;
    cout << toast ;
}