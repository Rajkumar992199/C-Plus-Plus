#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,s1,s2,s3,s4;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> s1 >> s2 >> s3 >> s4;
        int f1,f2,r1,r2;
        if(s1>s2) {
            f1=s1;
            r1=s2;
        }
        else {
            f1=s2;
            r1=s1;
        }
        if(s3>s4) {
            f2=s3;
            r2=s4;
        }
        else {
            f2=s4;
            r2=s3;
        }
        if(r1>f2 || r2>f1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}