#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,k;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> a >> b;
        if(a%b==0) cout << "0" << endl;
        else{
            k = (a/b)+1;
            b = b*k;
            a = b-a;
            cout << a << endl;
        }
    }
}