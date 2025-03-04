#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n],b[n],c[n],min,k=0,l=0;
        for(int i=0;i<n;i++) cin >> a[i];
        min = *min_element(a,a+n);
        for(int i=0;i<n;i++) {
            if(a[i] == min) {
                b[k] = a[i];
                k++;
            }
            else {
                c[l] = a[i];
                l++;
            }
        }
        if(l == 0) cout << -1 << endl;
        else {
            cout << k << " " << l << endl;
            for(int i=0; i < k ; i++) cout << b[i] << " ";
            cout << endl;
            for(int i=0; i < l ; i++) cout << c[i] << " ";
            cout << endl;
        }
    }
}