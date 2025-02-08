#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> a >> b;
        if(a>b) {
            if(2*b>a) cout << pow((2*b),2) << endl;
            else cout << pow(a,2) << endl;
        }
        else {
            if(2*a>b) cout << pow((2*a),2) << endl;
            else cout << pow(b,2) << endl;
        }
    }
}