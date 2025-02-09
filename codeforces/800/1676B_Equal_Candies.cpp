#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> n;
        long long a[n],sum=0,min=10000000;
        for(int j=0;j<n;j++) {
            cin >> a[j];
            if(min>a[j]) min=a[j];
        }
        for(int j=0;j<n;j++) sum += (a[j]-min);
        cout << sum << endl;
    }
}