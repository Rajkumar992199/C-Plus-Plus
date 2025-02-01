#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a >> b >> c;
        if(a>b){
            if(b>c) cout << b << endl;
            else {
                if(a>c) cout << c << endl;
                else cout << a << endl;
            }
        }
        else {
            if(c>b) cout << b << endl;
            else  {
                if(a>c) cout << a << endl;
                else cout << c << endl;
            }
        }
    }
}