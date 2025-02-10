#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(k%4==0 || (n%2==0 && k%4==1) || (n%2!=0 && k%4==3)) {
            cout << "YES" << endl;
            continue;
        }
        else cout << "NO" << endl;
    }
}