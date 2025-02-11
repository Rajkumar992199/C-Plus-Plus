#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long m,a,b,c,seat=0,k=0;
        cin >> m >> a >> b >> c;
        if(m>a) {
            seat +=a;
            k += m-a;
        }
        else seat +=m;
        if(m>b) {
            seat +=b;
            k += m-b;
        }
        else seat +=m;
        if(k>c) seat +=c;
        else seat +=k;
        cout << seat << endl;
    }
}