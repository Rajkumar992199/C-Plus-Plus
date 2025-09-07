#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, mx = INT_MIN, mn = INT_MAX, mxi = 0, mni = 0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] > mx) {
                mx = a[i];
                mxi = i;
            }
            if(a[i] < mn) {
                mn = a[i];
                mni = i;
            }
        }
        if(mxi < mni) swap(mxi, mni);
        cout << min(min(n - mni, mxi + 1), n - mxi + mni + 1) << endl;
    }
    return 0;
}