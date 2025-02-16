#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        char s[n],a,b;
        for(int i=0;i<n;i++) cin >> s[i];
        for(int i=0;i<n;i++) if(s[i]=='B') {
            a=i;
            break;
        }
        for(int i=1;i<=n;i++) if(s[n-i]=='B') {
            b=n-i+1;
            break;
        }
        cout << b-a << endl;
    }
}