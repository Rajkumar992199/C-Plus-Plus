#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,m,a,l,h;
        cin >> n >> m >> a;
        l = n/a;
        if(n-(l*a)!=0) l++;
        h = m/a;
        if(m-(h*a)!=0) h++;
        cout << h*l;
}