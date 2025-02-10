#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int k=1;
        while(n/4) {
            k = k*2;
            n = n/4;
        }
        cout << k << endl;
    }
}