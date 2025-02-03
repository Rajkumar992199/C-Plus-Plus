#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        long long a[n],sum=0;
        if((n/2)%2==0) {
            cout << "YES" << endl;
            for(int j=0;j<n/2;j++){
                a[j]=2*(j+1);
                sum += a[j];
                cout << a[j] << " ";
            }
            for(int j=1;j<n/2;j++){
                a[j+(n/2)-1] = (2*j)-1;
                sum -= (2*j)-1;
                cout << (2*j)-1 << " ";
            }
            cout << sum << endl;
        }
        else cout << "NO" << endl;
    }
}