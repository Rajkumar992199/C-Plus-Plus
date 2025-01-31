#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,a=".-";
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i]==a[1]){
            if(s[i+1]==a[0]) cout << "1";
            else cout << "2";
            i++;
        }
        else cout << "0";
    }
}