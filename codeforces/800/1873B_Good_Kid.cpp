#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> n;
        int a[n],min=10000,k,prod=1;
        for(int j=0;j<n;j++){
            cin >> a[j];
            if(min > a[j]) {
                k=j;
                min = a[j];
            }
        }
        a[k]++;
        for(int j=0;j<n;j++) prod *= a[j];
        cout << prod << endl;
    }
}