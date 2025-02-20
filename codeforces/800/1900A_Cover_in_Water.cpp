#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        string s;
        int m=0,x=0;
        cin >> n >> s;
        for(int i=0;i<n;i++) if(s[i]=='.') x++;
        for(int i=0;i<n;i++){
            if(s[i]=='.') if(s[i+1]=='.') m++;
            if(s[i]=='#') m=0;
            if(m==2) break;
        }
        if(m==2) cout << 2 << endl;
        else cout << x << endl;
    }
}