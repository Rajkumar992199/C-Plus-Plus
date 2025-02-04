#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> s;
        if(s[0]=='a' || s[1]=='b' || s[2]=='c') cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}