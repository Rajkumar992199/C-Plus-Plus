#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c,m;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a >> b >> c;
        m = max(abs(a+b),max(abs(b+c),abs(c+a)));
        if(m>=10) cout << "YES" << endl;
        else cout << "No" << endl;
    }
}