#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k=0,p,q;
    cin >> n >> p;
    int a[p];
    for(int i=0;i<p;i++) cin >> a[i];
    cin >> q;
    int b[q];
    for(int i=0;i<q;i++) cin >> b[i];
    for(int i=1;i<=n;i++) {
        for(int j=0;j<n;j++){
            if(a[j]==i || b[j]==i){
                k++;
                break;
            }
        }        
    }
    if(k==n) cout << "I become the guy.";
        else cout << "Oh, my keyboard!";
}