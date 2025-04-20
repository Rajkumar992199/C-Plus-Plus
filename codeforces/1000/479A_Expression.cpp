#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,k;
    cin >> a >> b >> c;
    k=max(max(max(a+b+c,(a+b)*c),max(a*(b+c),a*b*c)),max(a+(b*c),(a*b)+c));
    cout << k;
}