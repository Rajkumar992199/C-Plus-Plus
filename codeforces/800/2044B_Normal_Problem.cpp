#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,l;
    cin >> t;
    while(t--){
        string s,a;
        cin >> s;
        int n = s.length(); 
        a = s;
        for(int i= 0;i<s.length();i++) {
            if(s[i]=='p') a[n-i-1] = 'q';
            else if (s[i]=='q') a[n-i-1] = 'p';
            else a[n-i-1] = 'w';
        }
        cout << a << endl;
    }
}