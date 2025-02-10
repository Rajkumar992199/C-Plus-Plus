#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n,m,r,c;
        cin >> n >> m >> r >> c;
        cout << ((2*m-1)*(n-r))+(m-c) << endl;
    }
}