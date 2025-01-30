#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long n;
    cin >> t;
    for(int i=0;i<t;i++){
        int a=0,b=0;
        cin >> n;
        for(int j=0;j<3;j++){
            a += n%10;
            n = n/10;
        }
        for(int j=0;j<3;j++){
            b += n%10;
            n = n/10;
        }
        if(a==b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}