#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        char a[n],b[n];
        int count=0;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        for(int i=0;i<n;i++){
            if(a[i]=='R') {
                if(a[i]!=b[i]) {
                cout << "NO" << endl;
                count++;
                break;
            }
            }
            else if (b[i]=='R') {
                if(a[i]!=b[i]) {
                cout << "NO" << endl;
                count++;
                break;
            }
            }
        }
        if(!count) cout << "YES" << endl;
    }
}