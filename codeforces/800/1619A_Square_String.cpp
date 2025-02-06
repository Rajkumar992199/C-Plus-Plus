#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> s;
        n = s.length();
        int k=0;
        if(n%2==1){
            cout << "NO" << endl;
            continue;
        }
        for(int i=0;i<(n/2);i++){
            if(s[i]==s[i+n/2]) k++;
        }
        if(k==(n/2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}