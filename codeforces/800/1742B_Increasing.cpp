#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n],count=0;
        for(int j=0;j<n;j++) cin >> a[j];
            for(int j=0;j<n;j++){
            for(int k=0;k<j;k++) {
                if(a[j]==a[k]) {
                    cout << "NO" <<endl;
                    count++;
                    break;
                }
            }
        if(count) break;
    }
    if(!count) cout << "YES" << endl;
    }
}