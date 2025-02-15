#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,a,b;
    cin >> t;
    while(t--){
        int max=0;
        cin >> n >> a >> b;
        if(2*a>b) max = (n/2)*b + (n%2)*a;
        else max = n*a;
        cout << max << endl;
    }
}